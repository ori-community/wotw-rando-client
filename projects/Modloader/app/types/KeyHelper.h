#pragma once
#include <Modloader/app/structs/KeyHelper.h>
#include <Modloader/app/structs/KeyHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyHelper {
        inline app::KeyHelper__Class** type_info() {
            static app::KeyHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeyHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeyHelper__Class* get_class() {
            return il2cpp::get_class<app::KeyHelper__Class>(type_info(), "System.Xml.Serialization", "KeyHelper");
        }
        inline app::KeyHelper* create() {
            return il2cpp::create_object<app::KeyHelper>(get_class());
        }
    } // namespace KeyHelper
} // namespace app::classes::types
