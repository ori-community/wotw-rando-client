#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace XGameSaveProviderHandle {
        inline app::XGameSaveProviderHandle__Class** type_info = (app::XGameSaveProviderHandle__Class**)(modloader::win::memory::resolve_rva(0x04734A70));
        inline app::XGameSaveProviderHandle__Class* get_class() {
            return il2cpp::get_class<app::XGameSaveProviderHandle__Class>(type_info, "XGamingRuntime", "XGameSaveProviderHandle");
        }
        inline app::XGameSaveProviderHandle* create() {
            return il2cpp::create_object<app::XGameSaveProviderHandle>(get_class());
        }
    } // namespace XGameSaveProviderHandle
} // namespace app::classes::types
