#pragma once
#include <Modloader/app/structs/LinkIOSDeviceIDResult.h>
#include <Modloader/app/structs/LinkIOSDeviceIDResult__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LinkIOSDeviceIDResult {
        inline app::LinkIOSDeviceIDResult__Class** type_info() {
            static app::LinkIOSDeviceIDResult__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LinkIOSDeviceIDResult__Class**)(modloader::win::memory::resolve_rva(0x04796FD8));
            }
            return cache;
        }
        inline app::LinkIOSDeviceIDResult__Class* get_class() {
            return il2cpp::get_class<app::LinkIOSDeviceIDResult__Class>(type_info(), "PlayFab.ClientModels", "LinkIOSDeviceIDResult");
        }
        inline app::LinkIOSDeviceIDResult* create() {
            return il2cpp::create_object<app::LinkIOSDeviceIDResult>(get_class());
        }
    } // namespace LinkIOSDeviceIDResult
} // namespace app::classes::types
