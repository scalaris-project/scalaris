// Copyright (c) 2018-2019 The Blocknet developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BLOCKNET_QT_BLOCKNETAVATAR_H
#define BLOCKNET_QT_BLOCKNETAVATAR_H

#include <qt/blocknetguiutil.h>

#include <QFrame>

class BlocknetAvatar : public QFrame
{
    Q_OBJECT
protected:
    void paintEvent(QPaintEvent *event) override;

public:
    explicit BlocknetAvatar(QString title = "",
                            qreal w = BGU::spi(40), qreal h = BGU::spi(40),
                            QColor color1 = QColor(255 , 0, 0, 76), QColor color2 = QColor(255 , 0, 0, 76),
                            QWidget *parent = nullptr);

Q_SIGNALS:

public Q_SLOTS:

protected:
    QString title;
    QColor color1;
    QColor color2;
    qreal w;
    qreal h;
};

class BlocknetAvatarBlue : public BlocknetAvatar
{
    Q_OBJECT
public:
    explicit BlocknetAvatarBlue(QString title = "",
                            qreal w = BGU::spi(40), qreal h = BGU::spi(40),
                            QColor color1 = QColor(0, 255, 0, 76), QColor color2 = QColor(0, 255, 0, 76),
                            QWidget *parent = nullptr);
};

#endif // BLOCKNET_QT_BLOCKNETAVATAR_H