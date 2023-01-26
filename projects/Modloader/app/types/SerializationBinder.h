#pragma once
#include <Modloader/app/structs/SerializationBinder.h>
#include <Modloader/app/structs/SerializationBinder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializationBinder {
        inline app::SerializationBinder__Class** type_info() {
            static app::SerializationBinder__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SerializationBinder__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SerializationBinder__Class* get_class() {
            return il2cpp::get_class<app::SerializationBinder__Class>(type_info(), "System.Runtime.Serialization", "SerializationBinder");
        }
        inline app::SerializationBinder* create() {
            return il2cpp::create_object<app::SerializationBinder>(get_class());
        }
    } // namespace SerializationBinder
} // namespace app::classes::types
