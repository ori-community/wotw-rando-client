#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace LoremasterReplayController {
        extern IL2CPP_MODLOADER_DLLEXPORT app::LoremasterReplayController__Class** type_info;
        inline app::LoremasterReplayController__Class* get_class() {
            return il2cpp::get_class<app::LoremasterReplayController__Class>(type_info, "", "LoremasterReplayController");
        }
        inline app::LoremasterReplayController* create() {
            return il2cpp::create_object<app::LoremasterReplayController>(get_class());
        }
    } // namespace LoremasterReplayController
} // namespace app::classes::types
