#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaxHealthContainerPickup {
        inline app::MaxHealthContainerPickup__Class** type_info = (app::MaxHealthContainerPickup__Class**)(modloader::win::memory::resolve_rva(0x04731568));
        inline app::MaxHealthContainerPickup__Class* get_class() {
            return il2cpp::get_class<app::MaxHealthContainerPickup__Class>(type_info, "", "MaxHealthContainerPickup");
        }
        inline app::MaxHealthContainerPickup* create() {
            return il2cpp::create_object<app::MaxHealthContainerPickup>(get_class());
        }
    } // namespace MaxHealthContainerPickup
} // namespace app::classes::types
