#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabUtil {
        inline app::PlayFabUtil__Class** type_info = (app::PlayFabUtil__Class**)(modloader::win::memory::resolve_rva(0x0471F3B0));
        inline app::PlayFabUtil__Class* get_class() {
            return il2cpp::get_class<app::PlayFabUtil__Class>(type_info, "PlayFab.Internal", "PlayFabUtil");
        }
        inline app::PlayFabUtil* create() {
            return il2cpp::create_object<app::PlayFabUtil>(get_class());
        }
    } // namespace PlayFabUtil
} // namespace app::classes::types
