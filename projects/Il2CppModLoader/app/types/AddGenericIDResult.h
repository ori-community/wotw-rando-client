#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AddGenericIDResult {
        inline app::AddGenericIDResult__Class** type_info = (app::AddGenericIDResult__Class**)(modloader::win::memory::resolve_rva(0x0472A748));
        inline app::AddGenericIDResult__Class* get_class() {
            return il2cpp::get_class<app::AddGenericIDResult__Class>(type_info, "PlayFab.ClientModels", "AddGenericIDResult");
        }
        inline app::AddGenericIDResult* create() {
            return il2cpp::create_object<app::AddGenericIDResult>(get_class());
        }
    } // namespace AddGenericIDResult
} // namespace app::classes::types
