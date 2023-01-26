#pragma once
#include <Modloader/app/structs/MaxHealthHalfContainerPickup.h>
#include <Modloader/app/structs/MaxHealthHalfContainerPickup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaxHealthHalfContainerPickup {
        inline app::MaxHealthHalfContainerPickup__Class** type_info() {
            static app::MaxHealthHalfContainerPickup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MaxHealthHalfContainerPickup__Class**)(modloader::win::memory::resolve_rva(0x04794F98));
            }
            return cache;
        }
        inline app::MaxHealthHalfContainerPickup__Class* get_class() {
            return il2cpp::get_class<app::MaxHealthHalfContainerPickup__Class>(type_info(), "", "MaxHealthHalfContainerPickup");
        }
        inline app::MaxHealthHalfContainerPickup* create() {
            return il2cpp::create_object<app::MaxHealthHalfContainerPickup>(get_class());
        }
    } // namespace MaxHealthHalfContainerPickup
} // namespace app::classes::types
