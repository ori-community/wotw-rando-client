#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PlayFabDeviceUtil__Class.h>
#include <Modloader/app/structs/PlayFabDeviceUtil.h>

namespace app::classes::types {
    namespace PlayFabDeviceUtil {
        inline app::PlayFabDeviceUtil__Class** type_info = (app::PlayFabDeviceUtil__Class**)(modloader::win::memory::resolve_rva(0x04748170));
        inline app::PlayFabDeviceUtil__Class* get_class() {
            return il2cpp::get_class<app::PlayFabDeviceUtil__Class>(type_info, "PlayFab.Internal", "PlayFabDeviceUtil");
        }
        inline app::PlayFabDeviceUtil* create() {
            return il2cpp::create_object<app::PlayFabDeviceUtil>(get_class());
        }
    } // namespace PlayFabDeviceUtil
} // namespace app::classes::types
