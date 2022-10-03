#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HookFlingPlant {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HookFlingPlant__Class** type_info;
        inline app::HookFlingPlant__Class* get_class() {
            return il2cpp::get_class<app::HookFlingPlant__Class>(type_info, "", "HookFlingPlant");
        }
        inline app::HookFlingPlant* create() {
            return il2cpp::create_object<app::HookFlingPlant>(get_class());
        }
    } // namespace HookFlingPlant
} // namespace app::classes::types
