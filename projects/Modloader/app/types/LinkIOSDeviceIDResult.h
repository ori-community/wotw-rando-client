#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LinkIOSDeviceIDResult__Class.h>
#include <Modloader/app/structs/LinkIOSDeviceIDResult.h>

namespace app::classes::types {
    namespace LinkIOSDeviceIDResult {
        inline app::LinkIOSDeviceIDResult__Class** type_info = (app::LinkIOSDeviceIDResult__Class**)(modloader::win::memory::resolve_rva(0x04796FD8));
        inline app::LinkIOSDeviceIDResult__Class* get_class() {
            return il2cpp::get_class<app::LinkIOSDeviceIDResult__Class>(type_info, "PlayFab.ClientModels", "LinkIOSDeviceIDResult");
        }
        inline app::LinkIOSDeviceIDResult* create() {
            return il2cpp::create_object<app::LinkIOSDeviceIDResult>(get_class());
        }
    } // namespace LinkIOSDeviceIDResult
} // namespace app::classes::types
