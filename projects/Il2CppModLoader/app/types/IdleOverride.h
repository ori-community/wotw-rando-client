#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IdleOverride {
        namespace {
            inline app::IdleOverride__Class* type_info_ref = nullptr;
        }
        inline app::IdleOverride__Class** type_info = &type_info_ref;
        inline app::IdleOverride__Class* get_class() {
            return il2cpp::get_class<app::IdleOverride__Class>(type_info, "", "IdleOverride");
        }
        inline app::IdleOverride* create() {
            return il2cpp::create_object<app::IdleOverride>(get_class());
        }
    } // namespace IdleOverride
} // namespace app::classes::types
