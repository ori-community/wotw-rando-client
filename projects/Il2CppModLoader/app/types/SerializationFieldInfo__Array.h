#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationFieldInfo__Array {
        namespace {
            app::SerializationFieldInfo__Array__Class* type_info_ref = nullptr;
        }
        app::SerializationFieldInfo__Array__Class** type_info = &type_info_ref;
        inline app::SerializationFieldInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::SerializationFieldInfo__Array__Class>(type_info, "System.Runtime.Serialization", "SerializationFieldInfo[]");
        }
        inline app::SerializationFieldInfo__Array* create() {
            return il2cpp::create_object<app::SerializationFieldInfo__Array>(get_class());
        }
    } // namespace SerializationFieldInfo__Array
} // namespace app::classes::types
