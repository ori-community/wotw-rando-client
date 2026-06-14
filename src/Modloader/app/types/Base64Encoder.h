#pragma once
#include <Modloader/app/structs/Base64Encoder.h>
#include <Modloader/app/structs/Base64Encoder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Base64Encoder {
        inline app::Base64Encoder__Class** type_info() {
            static app::Base64Encoder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Base64Encoder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Base64Encoder__Class* get_class() {
            return il2cpp::get_class<app::Base64Encoder__Class>(type_info(), "System.Xml", "Base64Encoder");
        }
        inline app::Base64Encoder* create() {
            return il2cpp::create_object<app::Base64Encoder>(get_class());
        }
    } // namespace Base64Encoder
} // namespace app::classes::types
