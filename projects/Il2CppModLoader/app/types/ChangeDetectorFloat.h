#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ChangeDetectorFloat {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ChangeDetectorFloat__Class** type_info;
        inline app::ChangeDetectorFloat__Class* get_class() {
            return il2cpp::get_class<app::ChangeDetectorFloat__Class>(type_info, "", "ChangeDetectorFloat");
        }
        inline app::ChangeDetectorFloat* create() {
            return il2cpp::create_object<app::ChangeDetectorFloat>(get_class());
        }
    } // namespace ChangeDetectorFloat
} // namespace app::classes::types
