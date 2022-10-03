#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GoldenSein_UndrainRoutine_d_60 {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GoldenSein_UndrainRoutine_d_60__Class** type_info;
        inline app::GoldenSein_UndrainRoutine_d_60__Class* get_class() {
            return il2cpp::get_nested_class<app::GoldenSein_UndrainRoutine_d_60__Class>(type_info, "", "GoldenSein", "<UndrainRoutine>d__60");
        }
        inline app::GoldenSein_UndrainRoutine_d_60* create() {
            return il2cpp::create_object<app::GoldenSein_UndrainRoutine_d_60>(get_class());
        }
    } // namespace GoldenSein_UndrainRoutine_d_60
} // namespace app::classes::types
