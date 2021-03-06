// Copyright (c) 2019 The Blocknet developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <qt/blocknetcheckbox.h>
#include <qt/blocknetguiutil.h>

BlocknetCheckBox::BlocknetCheckBox(const QString & text, QWidget *parent) : QCheckBox(text, parent) {
    this->setContentsMargins(QMargins());
#ifndef Q_OS_MAC
    this->setStyleSheet("BlocknetCheckBox::indicator:checked { width: 24px; height: 24px; border: 1px solid #FFF; border-radius: 12px; background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.52, stop:0 #3ff108, stop:0.65 #3ff108, stop:0.70 rgba(0,0,0,0), stop:1 rgba(0,0,0,0)); } "
            "BlocknetCheckBox::indicator:unchecked { width: 24px; height: 24px; border: 1px solid #FFF; border-radius: 12px; background-color: transparent; }");
#endif
}

BlocknetCheckBox::BlocknetCheckBox(QWidget *parent) : BlocknetCheckBox(QString(), parent) { }
