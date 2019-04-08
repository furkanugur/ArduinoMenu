/* -*- C++ -*- */
#pragma once
////////////////////////////////////////////////////
// Rui Azevedo - Apr2019
// neu-rah (ruihfazevedo@gmail.com)
// store text on flash (Arduino framework)

#include <Arduino.h>
#include "../items.h"

namespace AM5 {
  template<typename O=Empty>
  class FlashTextDef:public O {
  protected:
    const __FlashStringHelper * text;
  public:
    // using O::O;
    inline FlashTextDef(PGM_P t):text(reinterpret_cast<const __FlashStringHelper *>(t)) {}
    inline FlashTextDef(FlashTextDef<O>& o):text(o.text) {}
    inline void out(MenuOut &o) const {o<<text;}
  };
};
