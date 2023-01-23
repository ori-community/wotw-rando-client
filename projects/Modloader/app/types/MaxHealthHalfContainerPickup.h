#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MaxHealthHalfContainerPickup__Class.h>
#include <Modloader/app/structs/MaxHealthHalfContainerPickup.h>

namespace app::classes::types {
    namespace MaxHealthHalfContainerPickup {
        inline app::MaxHealthHalfContainerPickup__Class** type_info = (app::MaxHealthHalfContainerPickup__Class**)(modloader::win::memory::resolve_rva(0x04794F98));
        inline app::MaxHealthHalfContainerPickup__Class* get_class() {
            return il2cpp::get_class<app::MaxHealthHalfContainerPickup__Class>(type_info, "", "MaxHealthHalfContainerPickup");
        }
        inline app::MaxHealthHalfContainerPickup* create() {
            return il2cpp::create_object<app::MaxHealthHalfContainerPickup>(get_class());
        }
    } // namespace MaxHealthHalfContainerPickup
} // namespace app::classes::types
