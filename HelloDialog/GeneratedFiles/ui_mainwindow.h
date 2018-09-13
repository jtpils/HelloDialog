/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "QVTKWidget.h"

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QAction *action22;
    QAction *openFileAction;
    QAction *bgColorMenu;
    QAction *pointCloudColorMenu;
    QAction *normalEstimationAction;
    QAction *plane_detect_set_param_Action;
    QAction *three_d_reconstruct_Action;
    QAction *translateToCentroidAction;
    QAction *removeNanAction;
    QAction *removeRedundantPointsAction;
    QAction *load_param_action;
    QAction *regulateCoorAction;
    QAction *normalEstimateAction;
    QAction *regulateNormalAction;
    QAction *performRegulateAction;
    QAction *removePointCloudAction;
    QAction *createPSAction;
    QAction *savePointNormalFileAction;
    QAction *openPointCloudNormalFileAction;
    QAction *filtPSAction;
    QAction *segPSAction;
    QAction *segPlaneAction;
    QAction *regionGrowingAction;
    QAction *mergePlanesAction;
    QAction *polyPlanesAction;
    QAction *postProcessAction;
    QAction *runAgainAction;
    QAction *autoPerformAction;
    QAction *editPolyAction;
    QAction *delPolyAction;
    QAction *performDelAction;
    QAction *savePolyDataAction;
    QAction *enterPruneModeAction;
    QAction *selCurPolyAction;
    QAction *setFirstPointAction;
    QAction *setSecondPointAction;
    QAction *performPolyCutAction;
    QAction *displayLineSegAction;
    QAction *switchLineSegAction;
    QAction *performLineSegDelAction;
    QAction *loadPolyDataAction;
    QAction *voxelGridFiltAction;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QVTKWidget *qvtkWidget;
    QMenuBar *menuBar;
    QMenu *fileMenu;
    QMenu *renderPropertyMenu;
    QMenu *pointCloudPreProcessMenu;
    QMenu *param_set_menu;
    QMenu *plane_detect_menu;
    QMenu *regulateNormalMenu;
    QMenu *normalProcessMenu;
    QMenu *psMenu;
    QMenu *segmentMenu;
    QMenu *editPolyMenu;
    QMenu *delLineSegMenu;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QStringLiteral("mainWindow"));
        mainWindow->resize(798, 464);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainWindow->sizePolicy().hasHeightForWidth());
        mainWindow->setSizePolicy(sizePolicy);
        action22 = new QAction(mainWindow);
        action22->setObjectName(QStringLiteral("action22"));
        openFileAction = new QAction(mainWindow);
        openFileAction->setObjectName(QStringLiteral("openFileAction"));
        bgColorMenu = new QAction(mainWindow);
        bgColorMenu->setObjectName(QStringLiteral("bgColorMenu"));
        pointCloudColorMenu = new QAction(mainWindow);
        pointCloudColorMenu->setObjectName(QStringLiteral("pointCloudColorMenu"));
        normalEstimationAction = new QAction(mainWindow);
        normalEstimationAction->setObjectName(QStringLiteral("normalEstimationAction"));
        plane_detect_set_param_Action = new QAction(mainWindow);
        plane_detect_set_param_Action->setObjectName(QStringLiteral("plane_detect_set_param_Action"));
        three_d_reconstruct_Action = new QAction(mainWindow);
        three_d_reconstruct_Action->setObjectName(QStringLiteral("three_d_reconstruct_Action"));
        translateToCentroidAction = new QAction(mainWindow);
        translateToCentroidAction->setObjectName(QStringLiteral("translateToCentroidAction"));
        removeNanAction = new QAction(mainWindow);
        removeNanAction->setObjectName(QStringLiteral("removeNanAction"));
        removeRedundantPointsAction = new QAction(mainWindow);
        removeRedundantPointsAction->setObjectName(QStringLiteral("removeRedundantPointsAction"));
        load_param_action = new QAction(mainWindow);
        load_param_action->setObjectName(QStringLiteral("load_param_action"));
        regulateCoorAction = new QAction(mainWindow);
        regulateCoorAction->setObjectName(QStringLiteral("regulateCoorAction"));
        normalEstimateAction = new QAction(mainWindow);
        normalEstimateAction->setObjectName(QStringLiteral("normalEstimateAction"));
        regulateNormalAction = new QAction(mainWindow);
        regulateNormalAction->setObjectName(QStringLiteral("regulateNormalAction"));
        performRegulateAction = new QAction(mainWindow);
        performRegulateAction->setObjectName(QStringLiteral("performRegulateAction"));
        removePointCloudAction = new QAction(mainWindow);
        removePointCloudAction->setObjectName(QStringLiteral("removePointCloudAction"));
        createPSAction = new QAction(mainWindow);
        createPSAction->setObjectName(QStringLiteral("createPSAction"));
        savePointNormalFileAction = new QAction(mainWindow);
        savePointNormalFileAction->setObjectName(QStringLiteral("savePointNormalFileAction"));
        openPointCloudNormalFileAction = new QAction(mainWindow);
        openPointCloudNormalFileAction->setObjectName(QStringLiteral("openPointCloudNormalFileAction"));
        filtPSAction = new QAction(mainWindow);
        filtPSAction->setObjectName(QStringLiteral("filtPSAction"));
        segPSAction = new QAction(mainWindow);
        segPSAction->setObjectName(QStringLiteral("segPSAction"));
        segPlaneAction = new QAction(mainWindow);
        segPlaneAction->setObjectName(QStringLiteral("segPlaneAction"));
        regionGrowingAction = new QAction(mainWindow);
        regionGrowingAction->setObjectName(QStringLiteral("regionGrowingAction"));
        mergePlanesAction = new QAction(mainWindow);
        mergePlanesAction->setObjectName(QStringLiteral("mergePlanesAction"));
        polyPlanesAction = new QAction(mainWindow);
        polyPlanesAction->setObjectName(QStringLiteral("polyPlanesAction"));
        postProcessAction = new QAction(mainWindow);
        postProcessAction->setObjectName(QStringLiteral("postProcessAction"));
        runAgainAction = new QAction(mainWindow);
        runAgainAction->setObjectName(QStringLiteral("runAgainAction"));
        autoPerformAction = new QAction(mainWindow);
        autoPerformAction->setObjectName(QStringLiteral("autoPerformAction"));
        editPolyAction = new QAction(mainWindow);
        editPolyAction->setObjectName(QStringLiteral("editPolyAction"));
        delPolyAction = new QAction(mainWindow);
        delPolyAction->setObjectName(QStringLiteral("delPolyAction"));
        performDelAction = new QAction(mainWindow);
        performDelAction->setObjectName(QStringLiteral("performDelAction"));
        savePolyDataAction = new QAction(mainWindow);
        savePolyDataAction->setObjectName(QStringLiteral("savePolyDataAction"));
        enterPruneModeAction = new QAction(mainWindow);
        enterPruneModeAction->setObjectName(QStringLiteral("enterPruneModeAction"));
        selCurPolyAction = new QAction(mainWindow);
        selCurPolyAction->setObjectName(QStringLiteral("selCurPolyAction"));
        setFirstPointAction = new QAction(mainWindow);
        setFirstPointAction->setObjectName(QStringLiteral("setFirstPointAction"));
        setSecondPointAction = new QAction(mainWindow);
        setSecondPointAction->setObjectName(QStringLiteral("setSecondPointAction"));
        performPolyCutAction = new QAction(mainWindow);
        performPolyCutAction->setObjectName(QStringLiteral("performPolyCutAction"));
        displayLineSegAction = new QAction(mainWindow);
        displayLineSegAction->setObjectName(QStringLiteral("displayLineSegAction"));
        switchLineSegAction = new QAction(mainWindow);
        switchLineSegAction->setObjectName(QStringLiteral("switchLineSegAction"));
        performLineSegDelAction = new QAction(mainWindow);
        performLineSegDelAction->setObjectName(QStringLiteral("performLineSegDelAction"));
        loadPolyDataAction = new QAction(mainWindow);
        loadPolyDataAction->setObjectName(QStringLiteral("loadPolyDataAction"));
        voxelGridFiltAction = new QAction(mainWindow);
        voxelGridFiltAction->setObjectName(QStringLiteral("voxelGridFiltAction"));
        centralwidget = new QWidget(mainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(1);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        qvtkWidget = new QVTKWidget(centralwidget);
        qvtkWidget->setObjectName(QStringLiteral("qvtkWidget"));
        sizePolicy.setHeightForWidth(qvtkWidget->sizePolicy().hasHeightForWidth());
        qvtkWidget->setSizePolicy(sizePolicy);
        qvtkWidget->setMinimumSize(QSize(1, 1));

        gridLayout->addWidget(qvtkWidget, 0, 0, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        mainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(mainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 798, 23));
        fileMenu = new QMenu(menuBar);
        fileMenu->setObjectName(QStringLiteral("fileMenu"));
        renderPropertyMenu = new QMenu(menuBar);
        renderPropertyMenu->setObjectName(QStringLiteral("renderPropertyMenu"));
        pointCloudPreProcessMenu = new QMenu(menuBar);
        pointCloudPreProcessMenu->setObjectName(QStringLiteral("pointCloudPreProcessMenu"));
        param_set_menu = new QMenu(menuBar);
        param_set_menu->setObjectName(QStringLiteral("param_set_menu"));
        plane_detect_menu = new QMenu(menuBar);
        plane_detect_menu->setObjectName(QStringLiteral("plane_detect_menu"));
        regulateNormalMenu = new QMenu(plane_detect_menu);
        regulateNormalMenu->setObjectName(QStringLiteral("regulateNormalMenu"));
        normalProcessMenu = new QMenu(plane_detect_menu);
        normalProcessMenu->setObjectName(QStringLiteral("normalProcessMenu"));
        psMenu = new QMenu(plane_detect_menu);
        psMenu->setObjectName(QStringLiteral("psMenu"));
        segmentMenu = new QMenu(plane_detect_menu);
        segmentMenu->setObjectName(QStringLiteral("segmentMenu"));
        editPolyMenu = new QMenu(plane_detect_menu);
        editPolyMenu->setObjectName(QStringLiteral("editPolyMenu"));
        delLineSegMenu = new QMenu(editPolyMenu);
        delLineSegMenu->setObjectName(QStringLiteral("delLineSegMenu"));
        mainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mainWindow->setStatusBar(statusBar);

        menuBar->addAction(fileMenu->menuAction());
        menuBar->addAction(renderPropertyMenu->menuAction());
        menuBar->addAction(pointCloudPreProcessMenu->menuAction());
        menuBar->addAction(param_set_menu->menuAction());
        menuBar->addAction(plane_detect_menu->menuAction());
        fileMenu->addAction(openFileAction);
        fileMenu->addAction(openPointCloudNormalFileAction);
        fileMenu->addAction(loadPolyDataAction);
        renderPropertyMenu->addAction(bgColorMenu);
        renderPropertyMenu->addAction(pointCloudColorMenu);
        renderPropertyMenu->addAction(removePointCloudAction);
        pointCloudPreProcessMenu->addAction(removeNanAction);
        pointCloudPreProcessMenu->addAction(removeRedundantPointsAction);
        pointCloudPreProcessMenu->addAction(translateToCentroidAction);
        pointCloudPreProcessMenu->addAction(regulateCoorAction);
        pointCloudPreProcessMenu->addAction(voxelGridFiltAction);
        param_set_menu->addAction(plane_detect_set_param_Action);
        param_set_menu->addAction(three_d_reconstruct_Action);
        plane_detect_menu->addAction(load_param_action);
        plane_detect_menu->addSeparator();
        plane_detect_menu->addAction(normalProcessMenu->menuAction());
        plane_detect_menu->addAction(regulateNormalMenu->menuAction());
        plane_detect_menu->addAction(psMenu->menuAction());
        plane_detect_menu->addAction(segmentMenu->menuAction());
        plane_detect_menu->addAction(regionGrowingAction);
        plane_detect_menu->addAction(mergePlanesAction);
        plane_detect_menu->addAction(polyPlanesAction);
        plane_detect_menu->addAction(postProcessAction);
        plane_detect_menu->addSeparator();
        plane_detect_menu->addAction(runAgainAction);
        plane_detect_menu->addSeparator();
        plane_detect_menu->addAction(autoPerformAction);
        plane_detect_menu->addSeparator();
        plane_detect_menu->addAction(editPolyMenu->menuAction());
        plane_detect_menu->addSeparator();
        plane_detect_menu->addAction(savePolyDataAction);
        regulateNormalMenu->addAction(regulateNormalAction);
        regulateNormalMenu->addAction(performRegulateAction);
        normalProcessMenu->addAction(normalEstimateAction);
        normalProcessMenu->addAction(savePointNormalFileAction);
        psMenu->addAction(createPSAction);
        psMenu->addAction(filtPSAction);
        segmentMenu->addAction(segPSAction);
        segmentMenu->addAction(segPlaneAction);
        editPolyMenu->addAction(editPolyAction);
        editPolyMenu->addAction(delPolyAction);
        editPolyMenu->addAction(performDelAction);
        editPolyMenu->addSeparator();
        editPolyMenu->addAction(enterPruneModeAction);
        editPolyMenu->addAction(selCurPolyAction);
        editPolyMenu->addAction(setFirstPointAction);
        editPolyMenu->addAction(setSecondPointAction);
        editPolyMenu->addAction(performPolyCutAction);
        editPolyMenu->addAction(delLineSegMenu->menuAction());
        delLineSegMenu->addAction(displayLineSegAction);
        delLineSegMenu->addAction(switchLineSegAction);
        delLineSegMenu->addAction(performLineSegDelAction);

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QApplication::translate("mainWindow", "3DRockMassModelPlatform", Q_NULLPTR));
        action22->setText(QApplication::translate("mainWindow", "22", Q_NULLPTR));
        openFileAction->setText(QApplication::translate("mainWindow", "\346\211\223\345\274\200\347\202\271\344\272\221\346\226\207\344\273\266(&O)", Q_NULLPTR));
        bgColorMenu->setText(QApplication::translate("mainWindow", "\350\203\214\346\231\257\350\211\262", Q_NULLPTR));
        pointCloudColorMenu->setText(QApplication::translate("mainWindow", "\347\202\271\344\272\221\345\261\236\346\200\247", Q_NULLPTR));
        normalEstimationAction->setText(QApplication::translate("mainWindow", "\346\263\225\345\220\221\351\207\217\344\274\260\350\256\241", Q_NULLPTR));
        plane_detect_set_param_Action->setText(QApplication::translate("mainWindow", "\345\271\263\351\235\242\346\217\220\345\217\226", Q_NULLPTR));
        three_d_reconstruct_Action->setText(QApplication::translate("mainWindow", "\344\270\211\347\273\264\351\207\215\345\273\272", Q_NULLPTR));
        translateToCentroidAction->setText(QApplication::translate("mainWindow", "\345\271\263\347\247\273\345\210\260\351\207\215\345\277\203", Q_NULLPTR));
        removeNanAction->setText(QApplication::translate("mainWindow", "\347\247\273\351\231\244NAN\347\202\271", Q_NULLPTR));
        removeRedundantPointsAction->setText(QApplication::translate("mainWindow", "\345\216\273\351\231\244\345\206\227\344\275\231\347\202\271", Q_NULLPTR));
        load_param_action->setText(QApplication::translate("mainWindow", "\345\212\240\350\275\275\345\217\202\346\225\260", Q_NULLPTR));
        regulateCoorAction->setText(QApplication::translate("mainWindow", "\344\277\256\346\255\243\345\235\220\346\240\207", Q_NULLPTR));
        normalEstimateAction->setText(QApplication::translate("mainWindow", "\344\274\260\350\256\241\346\263\225\345\220\221\351\207\217", Q_NULLPTR));
        regulateNormalAction->setText(QApplication::translate("mainWindow", "\351\200\211\346\213\251\346\214\207\347\244\272\347\202\271", Q_NULLPTR));
        performRegulateAction->setText(QApplication::translate("mainWindow", "\346\211\247\350\241\214\346\240\241\346\255\243", Q_NULLPTR));
        removePointCloudAction->setText(QApplication::translate("mainWindow", "\347\247\273\351\231\244\347\202\271\344\272\221", Q_NULLPTR));
        createPSAction->setText(QApplication::translate("mainWindow", "\345\210\233\345\273\272\345\217\202\346\225\260\347\251\272\351\227\264", Q_NULLPTR));
        savePointNormalFileAction->setText(QApplication::translate("mainWindow", "\344\277\235\345\255\230\346\263\225\345\220\221\351\207\217\347\202\271\344\272\221\346\226\207\344\273\266", Q_NULLPTR));
        openPointCloudNormalFileAction->setText(QApplication::translate("mainWindow", "\346\211\223\345\274\200\347\202\271\344\272\221\346\263\225\345\220\221\351\207\217\346\226\207\344\273\266", Q_NULLPTR));
        filtPSAction->setText(QApplication::translate("mainWindow", "\345\271\263\346\273\221\345\217\202\346\225\260\347\251\272\351\227\264", Q_NULLPTR));
        segPSAction->setText(QApplication::translate("mainWindow", "\345\217\202\346\225\260\347\251\272\351\227\264", Q_NULLPTR));
        segPlaneAction->setText(QApplication::translate("mainWindow", "\345\271\263\351\235\242", Q_NULLPTR));
        regionGrowingAction->setText(QApplication::translate("mainWindow", "\345\214\272\345\237\237\347\224\237\351\225\277", Q_NULLPTR));
        mergePlanesAction->setText(QApplication::translate("mainWindow", "\345\271\263\351\235\242\345\220\210\345\271\266", Q_NULLPTR));
        polyPlanesAction->setText(QApplication::translate("mainWindow", "\345\271\263\351\235\242\345\244\232\350\276\271\345\275\242\345\214\226", Q_NULLPTR));
        postProcessAction->setText(QApplication::translate("mainWindow", "\347\202\271\344\272\221\345\220\216\345\244\204\347\220\206", Q_NULLPTR));
        runAgainAction->setText(QApplication::translate("mainWindow", "\347\273\247\347\273\255\350\277\220\350\241\214", Q_NULLPTR));
        autoPerformAction->setText(QApplication::translate("mainWindow", "\350\207\252\345\212\250\346\211\247\350\241\214", Q_NULLPTR));
        editPolyAction->setText(QApplication::translate("mainWindow", "\350\277\233\345\205\245\345\244\232\350\276\271\345\275\242\345\210\240\351\231\244\346\250\241\345\274\217", Q_NULLPTR));
        delPolyAction->setText(QApplication::translate("mainWindow", "\347\241\256\345\256\232\345\210\240\351\231\244", Q_NULLPTR));
        performDelAction->setText(QApplication::translate("mainWindow", "\346\211\247\350\241\214\345\210\240\351\231\244\346\223\215\344\275\234", Q_NULLPTR));
        savePolyDataAction->setText(QApplication::translate("mainWindow", "\344\277\235\345\255\230\345\244\232\350\276\271\345\275\242\346\225\260\346\215\256", Q_NULLPTR));
        enterPruneModeAction->setText(QApplication::translate("mainWindow", "\350\277\233\345\205\245\345\244\232\350\276\271\345\275\242\344\277\256\345\211\252\346\250\241\345\274\217", Q_NULLPTR));
        selCurPolyAction->setText(QApplication::translate("mainWindow", "\351\200\211\344\270\255\345\275\223\345\211\215\345\244\232\350\276\271\345\275\242", Q_NULLPTR));
        setFirstPointAction->setText(QApplication::translate("mainWindow", "\350\256\276\347\275\256\351\200\211\344\270\255\347\202\271\344\270\272\347\254\254\344\270\200\344\270\252\351\241\266\347\202\271", Q_NULLPTR));
        setSecondPointAction->setText(QApplication::translate("mainWindow", "\350\256\276\347\275\256\351\200\211\344\270\255\347\202\271\344\270\272\347\254\254\344\272\214\344\270\252\351\241\266\347\202\271", Q_NULLPTR));
        performPolyCutAction->setText(QApplication::translate("mainWindow", "\346\211\247\350\241\214\345\244\232\350\276\271\345\275\242\345\210\207\345\210\206\346\223\215\344\275\234", Q_NULLPTR));
        displayLineSegAction->setText(QApplication::translate("mainWindow", "\346\237\245\347\234\213\346\211\200\351\200\211\347\272\277\346\256\265", Q_NULLPTR));
        switchLineSegAction->setText(QApplication::translate("mainWindow", "\347\272\277\346\256\265\345\210\207\346\215\242", Q_NULLPTR));
        performLineSegDelAction->setText(QApplication::translate("mainWindow", "\346\211\247\350\241\214\345\210\240\351\231\244", Q_NULLPTR));
        loadPolyDataAction->setText(QApplication::translate("mainWindow", "\345\212\240\350\275\275\345\244\232\350\276\271\345\275\242\346\225\260\346\215\256", Q_NULLPTR));
        voxelGridFiltAction->setText(QApplication::translate("mainWindow", "\344\275\223\347\264\240\346\273\244\346\263\242", Q_NULLPTR));
        fileMenu->setTitle(QApplication::translate("mainWindow", "\346\226\207\344\273\266", Q_NULLPTR));
        renderPropertyMenu->setTitle(QApplication::translate("mainWindow", "\346\270\262\346\237\223\345\261\236\346\200\247", Q_NULLPTR));
        pointCloudPreProcessMenu->setTitle(QApplication::translate("mainWindow", "\347\202\271\344\272\221\351\242\204\345\244\204\347\220\206", Q_NULLPTR));
        param_set_menu->setTitle(QApplication::translate("mainWindow", "\345\217\202\346\225\260\350\256\276\347\275\256", Q_NULLPTR));
        plane_detect_menu->setTitle(QApplication::translate("mainWindow", "\345\271\263\351\235\242\346\217\220\345\217\226", Q_NULLPTR));
        regulateNormalMenu->setTitle(QApplication::translate("mainWindow", "\346\240\241\346\255\243\347\202\271\344\272\221\346\263\225\345\220\221\351\207\217", Q_NULLPTR));
        normalProcessMenu->setTitle(QApplication::translate("mainWindow", "\346\263\225\345\220\221\351\207\217", Q_NULLPTR));
        psMenu->setTitle(QApplication::translate("mainWindow", "\345\217\202\346\225\260\347\251\272\351\227\264", Q_NULLPTR));
        segmentMenu->setTitle(QApplication::translate("mainWindow", "\345\210\206\345\211\262", Q_NULLPTR));
        editPolyMenu->setTitle(QApplication::translate("mainWindow", "\345\244\232\350\276\271\345\275\242\347\274\226\350\276\221", Q_NULLPTR));
        delLineSegMenu->setTitle(QApplication::translate("mainWindow", "\347\272\277\346\256\265\345\210\240\351\231\244", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H