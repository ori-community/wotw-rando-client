#pragma once
#include <Modloader/app/structs/LinkAndroidDeviceIDResult.h>
#include <Modloader/app/structs/LinkAndroidDeviceIDResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkAndroidDeviceIDResult {
        inline app::LinkAndroidDeviceIDResult__Class** type_info() {
            static app::LinkAndroidDeviceIDResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkAndroidDeviceIDResult__Class**)(modloader::win::memory::resolve_rva(0x0478D130));
            }
            return cache;
        }
        inline app::LinkAndroidDeviceIDResult__Class* get_class() {
            return il2cpp::get_class<app::LinkAndroidDeviceIDResult__Class>(type_info(), "PlayFab.ClientModels", "LinkAndroidDeviceIDResult");
        }
        inline app::LinkAndroidDeviceIDResult* create() {
            return il2cpp::create_object<app::LinkAndroidDeviceIDResult>(get_class());
        }
    } // namespace LinkAndroidDeviceIDResult
} // namespace app::classes::types
