#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeStructs_MonoClass {
        namespace {
            inline app::RuntimeStructs_MonoClass__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeStructs_MonoClass__Class** type_info = &type_info_ref;
        inline app::RuntimeStructs_MonoClass__Class* get_class() {
            return il2cpp::get_nested_class<app::RuntimeStructs_MonoClass__Class>(type_info, "Mono", "RuntimeStructs", "MonoClass");
        }
        inline app::RuntimeStructs_MonoClass* create() {
            return il2cpp::create_object<app::RuntimeStructs_MonoClass>(get_class());
        }
        inline app::RuntimeStructs_MonoClass__Boxed* box(app::RuntimeStructs_MonoClass value) {
            return il2cpp::box_value<app::RuntimeStructs_MonoClass__Boxed>(get_class(), value);
        }
    } // namespace RuntimeStructs_MonoClass
} // namespace app::classes::types
