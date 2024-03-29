#pragma once
#include <Modloader/app/structs/UnlinkIOSDeviceIDResult.h>
#include <Modloader/app/structs/UnlinkIOSDeviceIDResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnlinkIOSDeviceIDResult {
        inline app::UnlinkIOSDeviceIDResult__Class** type_info() {
            static app::UnlinkIOSDeviceIDResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnlinkIOSDeviceIDResult__Class**)(modloader::win::memory::resolve_rva(0x0473F080));
            }
            return cache;
        }
        inline app::UnlinkIOSDeviceIDResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkIOSDeviceIDResult__Class>(type_info(), "PlayFab.ClientModels", "UnlinkIOSDeviceIDResult");
        }
        inline app::UnlinkIOSDeviceIDResult* create() {
            return il2cpp::create_object<app::UnlinkIOSDeviceIDResult>(get_class());
        }
    } // namespace UnlinkIOSDeviceIDResult
} // namespace app::classes::types
