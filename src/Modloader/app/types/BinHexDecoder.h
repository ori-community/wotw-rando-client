#pragma once
#include <Modloader/app/structs/BinHexDecoder.h>
#include <Modloader/app/structs/BinHexDecoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BinHexDecoder {
        inline app::BinHexDecoder__Class** type_info() {
            static app::BinHexDecoder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BinHexDecoder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BinHexDecoder__Class* get_class() {
            return il2cpp::get_class<app::BinHexDecoder__Class>(type_info(), "System.Xml", "BinHexDecoder");
        }
        inline app::BinHexDecoder* create() {
            return il2cpp::create_object<app::BinHexDecoder>(get_class());
        }
    } // namespace BinHexDecoder
} // namespace app::classes::types
