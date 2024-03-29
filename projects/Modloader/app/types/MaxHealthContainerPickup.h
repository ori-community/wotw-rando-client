#pragma once
#include <Modloader/app/structs/MaxHealthContainerPickup.h>
#include <Modloader/app/structs/MaxHealthContainerPickup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaxHealthContainerPickup {
        inline app::MaxHealthContainerPickup__Class** type_info() {
            static app::MaxHealthContainerPickup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MaxHealthContainerPickup__Class**)(modloader::win::memory::resolve_rva(0x04731568));
            }
            return cache;
        }
        inline app::MaxHealthContainerPickup__Class* get_class() {
            return il2cpp::get_class<app::MaxHealthContainerPickup__Class>(type_info(), "", "MaxHealthContainerPickup");
        }
        inline app::MaxHealthContainerPickup* create() {
            return il2cpp::create_object<app::MaxHealthContainerPickup>(get_class());
        }
    } // namespace MaxHealthContainerPickup
} // namespace app::classes::types
