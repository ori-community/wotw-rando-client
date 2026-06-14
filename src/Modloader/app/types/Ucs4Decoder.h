#pragma once
#include <Modloader/app/structs/Ucs4Decoder.h>
#include <Modloader/app/structs/Ucs4Decoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ucs4Decoder {
        inline app::Ucs4Decoder__Class** type_info() {
            static app::Ucs4Decoder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Ucs4Decoder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Ucs4Decoder__Class* get_class() {
            return il2cpp::get_class<app::Ucs4Decoder__Class>(type_info(), "System.Xml", "Ucs4Decoder");
        }
        inline app::Ucs4Decoder* create() {
            return il2cpp::create_object<app::Ucs4Decoder>(get_class());
        }
    } // namespace Ucs4Decoder
} // namespace app::classes::types
