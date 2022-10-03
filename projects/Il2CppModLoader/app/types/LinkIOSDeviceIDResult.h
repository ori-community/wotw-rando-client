#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LinkIOSDeviceIDResult {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LinkIOSDeviceIDResult__Class** type_info;
        inline app::LinkIOSDeviceIDResult__Class* get_class() {
            return il2cpp::get_class<app::LinkIOSDeviceIDResult__Class>(type_info, "PlayFab.ClientModels", "LinkIOSDeviceIDResult");
        }
        inline app::LinkIOSDeviceIDResult* create() {
            return il2cpp::create_object<app::LinkIOSDeviceIDResult>(get_class());
        }
    } // namespace LinkIOSDeviceIDResult
} // namespace app::classes::types
