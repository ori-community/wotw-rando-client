#pragma once
#include <Modloader/app/structs/EncodingNLS.h>
#include <Modloader/app/structs/EncodingNLS__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EncodingNLS {
        inline app::EncodingNLS__Class** type_info() {
            static app::EncodingNLS__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EncodingNLS__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EncodingNLS__Class* get_class() {
            return il2cpp::get_class<app::EncodingNLS__Class>(type_info(), "System.Text", "EncodingNLS");
        }
        inline app::EncodingNLS* create() {
            return il2cpp::create_object<app::EncodingNLS>(get_class());
        }
    } // namespace EncodingNLS
} // namespace app::classes::types
