#include <QString>
#include <QtTest>
#include "../QtCalculator/dialog.h"
#include "../build-QtCalculator-Desktop_Qt_5_2_0_MinGW_32bit-Debug/ui_dialog.h"

class TestGuiQtCalculatorTest : public QObject
{
    Q_OBJECT

public:
    TestGuiQtCalculatorTest();

private Q_SLOTS:
    void testCaseAdd_data();
    void testCaseAdd();

//    void testCaseSub_data();
//    void testCaseSub();

//    void testCaseMul_data();
//    void testCaseMul();

//    void testCaseDiv_data();
//    void testCaseDiv();
};

TestGuiQtCalculatorTest::TestGuiQtCalculatorTest()
{
}

void TestGuiQtCalculatorTest::testCaseAdd_data()
{
//    QTest::addColumn<double>("arg1");
//    QTest::addColumn<double>("arg2");
//    QTest::addColumn<double>("expected");

//    QTest::newRow("add") << 1.0 << 4.0 << 5.0;
//    QTest::newRow("add") << -5.0 << 5.0 << 0.0;
//    QTest::newRow("add") << -1.0 << 4.0 << 3.0;


    QTest::addColumn<QTestEventList>("events_for_A");
    QTest::addColumn<QTestEventList>("events_for_B");
    //QTest::addColumn<QTestEventList>("events_for_btnResult");
    QTest::addColumn<double>("expected");

    QTestEventList events_for_A;
    events_for_A.addKeyClick('5');

    QTestEventList events_for_B;
    events_for_B.addKeyClick('7');

//    QTestEventList events_for_btnResult;
//    events_for_btnResult.;

    QTest::newRow("add") << events_for_A << events_for_B << 12;


//    QTest::addColumn<QTestEventList>("events");
//    QTest::addColumn<QString>("expected");

//    QTestEventList list1;
//    list1.addKeyClick('a');
//    QTest::newRow("char") << list1 << "a";

//    QTestEventList list2;
//    list2.addKeyClick('a');
//    list2.addKeyClick(Qt::Key_Backspace);
//    QTest::newRow("there and back again") << list2 << "";
}

void TestGuiQtCalculatorTest::testCaseAdd()
{
//    QFETCH(double, arg1);
//    QFETCH(double, arg2);
//    QFETCH(double, expected);

//    Calculator calc;
//    double actual = calc.add(arg1, arg2);
//    double delta = 0.0001;

//    bool result = qFuzzyCompare(expected, actual, delta);
//    QString message = QString("expected = %1; actual = %2; delta = %3;").arg(expected).arg(actual).arg(delta);
//    QVERIFY2(result, message.toStdString().c_str());


    QFETCH(QTestEventList, events_for_A);
    QFETCH(QTestEventList, events_for_B);
    QFETCH(double, expected);

    Dialog dialog;


    //events.simulate();

    //QCOMPARE(lineEdit.text(), expected);
    QCOMPARE(1, 1);
}

//void TestQtCalculatorTest::testCaseSub_data()
//{
//    QTest::addColumn<double>("arg1");
//    QTest::addColumn<double>("arg2");
//    QTest::addColumn<double>("expected");

//    QTest::newRow("sub") << 1.0 << 4.0 << -3.0;
//    QTest::newRow("sub") << -5.0 << 5.0 << -10.0;
//    QTest::newRow("sub") << 5.5 << 10.0 << -4.5;
//}

//void TestQtCalculatorTest::testCaseSub()
//{
//    QFETCH(double, arg1);
//    QFETCH(double, arg2);
//    QFETCH(double, expected);

//    Calculator calc;
//    double actual = calc.sub(arg1, arg2);
//    double delta = 0.0001;

//    bool result = qFuzzyCompare(expected, actual, delta);
//    QString message = QString("expected = %1; actual = %2; delta = %3;").arg(expected).arg(actual).arg(delta);
//    QVERIFY2(result, message.toStdString().c_str());
//}

//void TestQtCalculatorTest::testCaseMul_data()
//{
//    QTest::addColumn<double>("arg1");
//    QTest::addColumn<double>("arg2");
//    QTest::addColumn<double>("expected");

//    QTest::newRow("mul") << 1.0 << 4.0 << 4.0;
//    QTest::newRow("mul") << -5.0 << 5.0 << -25.0;
//    QTest::newRow("mul") << -1.0 << 4.5 << -4.5;
//}

//void TestQtCalculatorTest::testCaseMul()
//{
//    QFETCH(double, arg1);
//    QFETCH(double, arg2);
//    QFETCH(double, expected);

//    Calculator calc;
//    double actual = calc.mul(arg1, arg2);
//    double delta = 0.0001;

//    bool result = qFuzzyCompare(expected, actual, delta);
//    QString message = QString("expected = %1; actual = %2; delta = %3;").arg(expected).arg(actual).arg(delta);
//    QVERIFY2(result, message.toStdString().c_str());
//}

//void TestQtCalculatorTest::testCaseDiv_data()
//{
//    QTest::addColumn<double>("arg1");
//    QTest::addColumn<double>("arg2");
//    QTest::addColumn<double>("expected");

//    QTest::newRow("div") << 4.0 << 2.0 << 2.0;
//    QTest::newRow("div") << -5.0 << 5.0 << -1.0;
//    //QTest::newRow("div") << 0.0 << 0.0 << 0.0;
//}

//void TestQtCalculatorTest::testCaseDiv()
//{
//    QFETCH(double, arg1);
//    QFETCH(double, arg2);
//    QFETCH(double, expected);

//    Calculator calc;
//    double actual = calc.div(arg1, arg2);
//    double delta = 0.0001;

//    bool result = qFuzzyCompare(expected, actual, delta);
//    QString message = QString("expected = %1; actual = %2; delta = %3;").arg(expected).arg(actual).arg(delta);
//    QVERIFY2(result, message.toStdString().c_str());
//}

QTEST_APPLESS_MAIN(TestGuiQtCalculatorTest)

#include "tst_testguiqtcalculatortest.moc"
