#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DepthOfFieldController {
        inline app::DepthOfFieldController__Class** type_info = (app::DepthOfFieldController__Class**)(modloader::win::memory::resolve_rva(0x0476E3C8));
        inline app::DepthOfFieldController__Class* get_class() {
            return il2cpp::get_class<app::DepthOfFieldController__Class>(type_info, "", "DepthOfFieldController");
        }
        inline app::DepthOfFieldController* create() {
            return il2cpp::create_object<app::DepthOfFieldController>(get_class());
        }
    } // namespace DepthOfFieldController
} // namespace app::classes::types
