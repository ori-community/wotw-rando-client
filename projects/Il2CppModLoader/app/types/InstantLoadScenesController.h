#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantLoadScenesController {
        inline app::InstantLoadScenesController__Class** type_info = (app::InstantLoadScenesController__Class**)(modloader::win::memory::resolve_rva(0x0471CD28));
        inline app::InstantLoadScenesController__Class* get_class() {
            return il2cpp::get_class<app::InstantLoadScenesController__Class>(type_info, "", "InstantLoadScenesController");
        }
        inline app::InstantLoadScenesController* create() {
            return il2cpp::create_object<app::InstantLoadScenesController>(get_class());
        }
    } // namespace InstantLoadScenesController
} // namespace app::classes::types
