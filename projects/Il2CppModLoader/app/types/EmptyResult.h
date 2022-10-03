#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace EmptyResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::EmptyResult__Class** type_info;
        inline app::EmptyResult__Class* get_class() {
            return il2cpp::get_class<app::EmptyResult__Class>(type_info, "PlayFab.ClientModels", "EmptyResult");
        }
        inline app::EmptyResult* create() {
            return il2cpp::create_object<app::EmptyResult>(get_class());
        }
    } // namespace EmptyResult
} // namespace app::classes::types
