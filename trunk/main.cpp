#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);



//    Site *site;
//    QFile file("/opt/zueblin/etc/project.xml");
//    if (file.open(QFile::ReadOnly)) {
//        QLOG_INFO() << "Opening Site";
//        int l, c;
//        QString error;
//        QDomDocument doc("xml");
//        if (!doc.setContent(&file, false, &error, &l, &c)) {
//            QString msg("Error parsing project.xml: " + error +
//                        " (line " + QString::number(l) +
//                        ", column " + QString::number(c) + ")");
//            cout << msg << endl;
//        }
//        QDomElement SiteElement = doc.documentElement();
//        site = new Site(SiteElement);

//    void Site::deserialize(const QDomElement &site)
//    {
//        QLOG_INFO() << QString::fromUtf8(__PRETTY_FUNCTION__) << "zoneIdUpgrade = " << zoneIdUpgrade;
//        if(site.hasAttribute("zoneIdUpgrade"))
//            zoneIdUpgrade = site.attribute("zoneIdUpgrade").toInt(); //CLEAN UP AFTER ZONE ID UPGRADE
//        QDomElement nameElement = site.firstChildElement("name");
//        if (!nameElement.isNull())
//            mName = site.firstChildElement("name").text();
//        QDomElement idElement = site.firstChildElement("id");
//        if (!idElement.isNull())
//            this->siteId = site.firstChildElement("id").text();
//        QDomElement locationElement = site.firstChildElement("location");
//        if (!locationElement.isNull())
//            this->location = locationElement.text();
//        QDomElement consultantElement = site.firstChildElement("consultant");
//        if (!consultantElement.isNull())
//            this->consultant = site.firstChildElement("consultant").text();
//        QDomElement responsibilityElement = site.firstChildElement("responsibility");
//        if (!responsibilityElement.isNull())
//            this->responsibility = responsibilityElement.text();
//        QDomElement commissioningDateElement = site.firstChildElement("commissioningdate");
//        if (!commissioningDateElement.isNull())
//            this->commissioningDate = QDate::fromString(commissioningDateElement.text(), "yyyy-MM-dd");
//        QDomElement criteriaElement = site.firstChildElement("criteria");
//        if (!criteriaElement.isNull())
//            this->criteria = criteriaElement.text();
//        QDomElement contractDescriptionElement = site.firstChildElement("contractdescription");
//        if (!contractDescriptionElement.isNull())
//            this->contractDescription = contractDescriptionElement.text();
//        QDomElement clientElement = site.firstChildElement("client");
//        if (!clientElement.isNull())
//            this->client = clientElement.text();
//        QDomElement managerElement = site.firstChildElement("manager");
//        if (!managerElement.isNull())
//            this->manager = managerElement.text();
//        mLastChanged = QDateTime::fromString(site.attribute("lastchanged", ""), Qt::ISODate);

//        QDomElement controllersElement = site.firstChildElement(
//                "controllers");
//        if (!controllersElement.isNull()) {
//            QDomNodeList controllerNodeList = controllersElement.elementsByTagName(
//                    "controller");
//            if (controllerNodeList.size() > 0) {
//                for (int i = 0; i < controllerNodeList.size(); i++) {
//                    QDomNode controllerNode = controllerNodeList.item(i);
//                    if (controllerNode.isElement()) {
//                        Controller *c = new Controller(controllerNode.toElement(), this);
//                        addController(c);
//                    }
//                }
//            }
//        }
//    }

//    Site::~Site()
//    {
//        QList<Controller *>::iterator iter;
//        for (iter = controllers.begin(); iter != controllers.end();) {
//            Controller *c = *iter;
//            iter = controllers.erase(iter);
//            delete c;
//        }
//    }

//    QDomElement Site::serialize(int xmlVersion) {
//        QLOG_INFO() << QString::fromUtf8(__PRETTY_FUNCTION__);
//        QDomDocument siteDocument(QString("xml"));

//        QDomElement siteElement = siteDocument.createElement("site");
//        siteElement.setAttribute("lastchanged", mLastChanged.toString(Qt::ISODate));
//        if(zoneIdUpgrade)
//            siteElement.setAttribute("zoneIdUpgrade", QString::number(zoneIdUpgrade)); //CLEAN UP AFTER ZONE ID UPGRADE


//        QDomElement siteNameElement = siteDocument.createElement("name");
//        QDomText siteNameText = siteDocument.createTextNode(mName);
//        siteNameElement.appendChild(siteNameText);
//        siteElement.appendChild(siteNameElement);

//        QDomElement siteIdElement = siteDocument.createElement("id");
//        QDomText siteIdText = siteDocument.createTextNode(siteId);
//        siteIdElement.appendChild(siteIdText);
//        siteElement.appendChild(siteIdElement);

//        QDomElement siteLocationElement = siteDocument.createElement("location");
//        QDomText siteLocationText = siteDocument.createTextNode(location);
//        siteLocationElement.appendChild(siteLocationText);
//        siteElement.appendChild(siteLocationElement);

//        QDomElement siteConsultantElement =
//                siteDocument.createElement("consultant");
//        QDomText siteConsultantText = siteDocument.createTextNode(consultant);
//        siteConsultantElement.appendChild(siteConsultantText);
//        siteElement.appendChild(siteConsultantElement);

//        QDomElement siteContractDescriptionElement =
//                siteDocument.createElement("contractdescription");
//        QDomText siteContractDescriptionText =
//                siteDocument.createTextNode(contractDescription);
//        siteContractDescriptionElement.appendChild(siteContractDescriptionText);
//        siteElement.appendChild(siteContractDescriptionElement);

//        QDomElement siteResponsibilityElement =
//                siteDocument.createElement("responsibility");
//        QDomText siteResponsibilityText =
//                siteDocument.createTextNode(responsibility);
//        siteResponsibilityElement.appendChild(siteResponsibilityText);
//        siteElement.appendChild(siteResponsibilityElement);

//        QDomElement siteCommissioningDateElement =
//                siteDocument.createElement("commissioningdate");
//        QDomText siteCommissioningDateText =
//                siteDocument.createTextNode(commissioningDate.toString("yyyy-MM-dd"));
//        siteCommissioningDateElement.appendChild(siteCommissioningDateText);
//        siteElement.appendChild(siteCommissioningDateElement);

//        QDomElement siteCriteriaElement = siteDocument.createElement("criteria");
//        QDomText siteCriteriaText = siteDocument.createTextNode(criteria);
//        siteCriteriaElement.appendChild(siteCriteriaText);
//        siteElement.appendChild(siteCriteriaElement);

//        QDomElement siteClientElement = siteDocument.createElement("client");
//        QDomText siteClientText = siteDocument.createTextNode(client);
//        siteClientElement.appendChild(siteClientText);
//        siteElement.appendChild(siteClientElement);

//        QDomElement managerElement = siteDocument.createElement("manager");
//        QDomText managerText = siteDocument.createTextNode(manager);
//        managerElement.appendChild(managerText);
//        siteElement.appendChild(managerElement);

//        if (controllers.size() > 0) {
//            QDomElement siteControllerElement = siteDocument.createElement(
//                    QString("controllers"));
//            foreach (Controller *controller, controllers) {
//                siteControllerElement.appendChild(controller->serialize(xmlVersion));
//            }
//            siteElement.appendChild(siteControllerElement);
//        }

//        return siteElement;
//    }


    MainWindow w;
    w.show();

    return a.exec();
}
