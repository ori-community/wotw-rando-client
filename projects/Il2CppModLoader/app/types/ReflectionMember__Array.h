#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionMember__Array {
        namespace {
            app::ReflectionMember__Array__Class* type_info_ref = nullptr;
        }
        app::ReflectionMember__Array__Class** type_info = &type_info_ref;
        inline app::ReflectionMember__Array__Class* get_class() {
            return il2cpp::get_class<app::ReflectionMember__Array__Class>(type_info, "Newtonsoft.Json.Utilities", "ReflectionMember[]");
        }
        inline app::ReflectionMember__Array* create() {
            return il2cpp::create_object<app::ReflectionMember__Array>(get_class());
        }
    } // namespace ReflectionMember__Array
} // namespace app::classes::types
