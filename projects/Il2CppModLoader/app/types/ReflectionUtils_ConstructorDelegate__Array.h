#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReflectionUtils_ConstructorDelegate__Array {
        namespace {
            app::ReflectionUtils_ConstructorDelegate__Array__Class* type_info_ref = nullptr;
        }
        app::ReflectionUtils_ConstructorDelegate__Array__Class** type_info = &type_info_ref;
        inline app::ReflectionUtils_ConstructorDelegate__Array__Class* get_class() {
            return il2cpp::get_class<app::ReflectionUtils_ConstructorDelegate__Array__Class>(type_info, "PlayFab.Json", "ReflectionUtils+ConstructorDelegate[]");
        }
        inline app::ReflectionUtils_ConstructorDelegate__Array* create() {
            return il2cpp::create_object<app::ReflectionUtils_ConstructorDelegate__Array>(get_class());
        }
    } // namespace ReflectionUtils_ConstructorDelegate__Array
} // namespace app::classes::types
