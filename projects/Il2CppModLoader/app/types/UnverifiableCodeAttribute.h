#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnverifiableCodeAttribute {
        namespace {
            inline app::UnverifiableCodeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::UnverifiableCodeAttribute__Class** type_info = &type_info_ref;
        inline app::UnverifiableCodeAttribute__Class* get_class() {
            return il2cpp::get_class<app::UnverifiableCodeAttribute__Class>(type_info, "System.Security", "UnverifiableCodeAttribute");
        }
        inline app::UnverifiableCodeAttribute* create() {
            return il2cpp::create_object<app::UnverifiableCodeAttribute>(get_class());
        }
    } // namespace UnverifiableCodeAttribute
} // namespace app::classes::types
