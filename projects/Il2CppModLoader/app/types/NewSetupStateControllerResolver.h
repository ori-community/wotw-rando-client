#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace NewSetupStateControllerResolver {
        inline app::NewSetupStateControllerResolver__Class** type_info = (app::NewSetupStateControllerResolver__Class**)(modloader::win::memory::resolve_rva(0x0478FCC8));
        inline app::NewSetupStateControllerResolver__Class* get_class() {
            return il2cpp::get_class<app::NewSetupStateControllerResolver__Class>(type_info, "Moon", "NewSetupStateControllerResolver");
        }
        inline app::NewSetupStateControllerResolver* create() {
            return il2cpp::create_object<app::NewSetupStateControllerResolver>(get_class());
        }
    } // namespace NewSetupStateControllerResolver
} // namespace app::classes::types
