#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GenericPuppet__Array {
        namespace {
            app::GenericPuppet__Array__Class* type_info_ref = nullptr;
        }
        app::GenericPuppet__Array__Class** type_info = &type_info_ref;
        inline app::GenericPuppet__Array__Class* get_class() {
            return il2cpp::get_class<app::GenericPuppet__Array__Class>(type_info, "", "GenericPuppet[]");
        }
        inline app::GenericPuppet__Array* create() {
            return il2cpp::create_object<app::GenericPuppet__Array>(get_class());
        }
    } // namespace GenericPuppet__Array
} // namespace app::classes::types
