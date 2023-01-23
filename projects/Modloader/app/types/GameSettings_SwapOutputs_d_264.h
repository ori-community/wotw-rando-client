#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GameSettings_SwapOutputs_d_264__Class.h>
#include <Modloader/app/structs/GameSettings_SwapOutputs_d_264.h>

namespace app::classes::types {
    namespace GameSettings_SwapOutputs_d_264 {
        inline app::GameSettings_SwapOutputs_d_264__Class** type_info = (app::GameSettings_SwapOutputs_d_264__Class**)(modloader::win::memory::resolve_rva(0x047144F0));
        inline app::GameSettings_SwapOutputs_d_264__Class* get_class() {
            return il2cpp::get_nested_class<app::GameSettings_SwapOutputs_d_264__Class>(type_info, "", "GameSettings", "<SwapOutputs>d__264");
        }
        inline app::GameSettings_SwapOutputs_d_264* create() {
            return il2cpp::create_object<app::GameSettings_SwapOutputs_d_264>(get_class());
        }
    } // namespace GameSettings_SwapOutputs_d_264
} // namespace app::classes::types
