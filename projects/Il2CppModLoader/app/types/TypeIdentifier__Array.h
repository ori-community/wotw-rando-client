#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeIdentifier__Array {
        namespace {
            inline app::TypeIdentifier__Array__Class* type_info_ref = nullptr;
        }
        inline app::TypeIdentifier__Array__Class** type_info = &type_info_ref;
        inline app::TypeIdentifier__Array__Class* get_class() {
            return il2cpp::get_class<app::TypeIdentifier__Array__Class>(type_info, "System", "TypeIdentifier[]");
        }
        inline app::TypeIdentifier__Array* create() {
            return il2cpp::create_object<app::TypeIdentifier__Array>(get_class());
        }
    } // namespace TypeIdentifier__Array
} // namespace app::classes::types
