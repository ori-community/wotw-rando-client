#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationBinder {
        namespace {
            app::SerializationBinder__Class* type_info_ref = nullptr;
        }
        app::SerializationBinder__Class** type_info = &type_info_ref;
        inline app::SerializationBinder__Class* get_class() {
            return il2cpp::get_class<app::SerializationBinder__Class>(type_info, "System.Runtime.Serialization", "SerializationBinder");
        }
        inline app::SerializationBinder* create() {
            return il2cpp::create_object<app::SerializationBinder>(get_class());
        }
    } // namespace SerializationBinder
} // namespace app::classes::types
