#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabEventType__Enum {
        inline app::PlayFabEventType__Enum__Class** type_info = (app::PlayFabEventType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04708DC8));
        inline app::PlayFabEventType__Enum__Class* get_class() {
            return il2cpp::get_class<app::PlayFabEventType__Enum__Class>(type_info, "PlayFab", "PlayFabEventType");
        }
        inline app::PlayFabEventType__Enum* create() {
            return il2cpp::create_object<app::PlayFabEventType__Enum>(get_class());
        }
    } // namespace PlayFabEventType__Enum
} // namespace app::classes::types
