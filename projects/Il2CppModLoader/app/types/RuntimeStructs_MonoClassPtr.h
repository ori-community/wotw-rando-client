#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeStructs_MonoClassPtr {
        namespace {
            inline app::RuntimeStructs_MonoClassPtr__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeStructs_MonoClassPtr__Class** type_info = &type_info_ref;
        inline app::RuntimeStructs_MonoClassPtr__Class* get_class() {
            return il2cpp::get_class<app::RuntimeStructs_MonoClassPtr__Class>(type_info, "Mono", "RuntimeStructs+MonoClass*");
        }
        inline app::RuntimeStructs_MonoClassPtr* create() {
            return il2cpp::create_object<app::RuntimeStructs_MonoClassPtr>(get_class());
        }
    } // namespace RuntimeStructs_MonoClassPtr
} // namespace app::classes::types
