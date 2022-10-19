#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace LoadingBoostController {
        inline app::LoadingBoostController__Class** type_info = (app::LoadingBoostController__Class**)(modloader::win::memory::resolve_rva(0x047556E8));
        inline app::LoadingBoostController__Class* get_class() {
            return il2cpp::get_class<app::LoadingBoostController__Class>(type_info, "", "LoadingBoostController");
        }
        inline app::LoadingBoostController* create() {
            return il2cpp::create_object<app::LoadingBoostController>(get_class());
        }
    } // namespace LoadingBoostController
} // namespace app::classes::types
