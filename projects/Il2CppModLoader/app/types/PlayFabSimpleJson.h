#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PlayFabSimpleJson {
        inline app::PlayFabSimpleJson__Class** type_info = (app::PlayFabSimpleJson__Class**)(modloader::win::memory::resolve_rva(0x04732E90));
        inline app::PlayFabSimpleJson__Class* get_class() {
            return il2cpp::get_class<app::PlayFabSimpleJson__Class>(type_info, "PlayFab.Json", "PlayFabSimpleJson");
        }
        inline app::PlayFabSimpleJson* create() {
            return il2cpp::create_object<app::PlayFabSimpleJson>(get_class());
        }
    } // namespace PlayFabSimpleJson
} // namespace app::classes::types
