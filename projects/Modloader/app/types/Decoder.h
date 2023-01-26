#pragma once
#include <Modloader/app/structs/Decoder.h>
#include <Modloader/app/structs/Decoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Decoder {
        inline app::Decoder__Class** type_info() {
            static app::Decoder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Decoder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Decoder__Class* get_class() {
            return il2cpp::get_class<app::Decoder__Class>(type_info(), "System.Text", "Decoder");
        }
        inline app::Decoder* create() {
            return il2cpp::create_object<app::Decoder>(get_class());
        }
    } // namespace Decoder
} // namespace app::classes::types
