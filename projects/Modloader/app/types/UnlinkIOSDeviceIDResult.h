#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnlinkIOSDeviceIDResult {
        inline app::UnlinkIOSDeviceIDResult__Class** type_info = (app::UnlinkIOSDeviceIDResult__Class**)(modloader::win::memory::resolve_rva(0x0473F080));
        inline app::UnlinkIOSDeviceIDResult__Class* get_class() {
            return il2cpp::get_class<app::UnlinkIOSDeviceIDResult__Class>(type_info, "PlayFab.ClientModels", "UnlinkIOSDeviceIDResult");
        }
        inline app::UnlinkIOSDeviceIDResult* create() {
            return il2cpp::create_object<app::UnlinkIOSDeviceIDResult>(get_class());
        }
    } // namespace UnlinkIOSDeviceIDResult
} // namespace app::classes::types
