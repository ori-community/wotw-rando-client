#pragma once
#include <Modloader/app/structs/UnlinkAndroidDeviceIDResult.h>
#include <Modloader/app/structs/UnlinkAndroidDeviceIDResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkAndroidDeviceIDResult {
        inline app::UnlinkAndroidDeviceIDResult__Class** type_info() {
            static app::UnlinkAndroidDeviceIDResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkAndroidDeviceIDResult__Class**)(modloader::win::memory::resolve_rva(0x04769B08));
            }
            return cache;
        }
        inline app::UnlinkAndroidDeviceIDResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkAndroidDeviceIDResult__Class>(type_info(), "PlayFab.ClientModels", "UnlinkAndroidDeviceIDResult");
        }
        inline app::UnlinkAndroidDeviceIDResult* create() {
            return il2cpp::create_object<app::UnlinkAndroidDeviceIDResult>(get_class());
        }
    } // namespace UnlinkAndroidDeviceIDResult
} // namespace app::classes::types
