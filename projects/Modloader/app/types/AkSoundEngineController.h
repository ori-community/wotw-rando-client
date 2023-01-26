#pragma once
#include <Modloader/app/structs/AkSoundEngineController.h>
#include <Modloader/app/structs/AkSoundEngineController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AkSoundEngineController {
        inline app::AkSoundEngineController__Class** type_info() {
            static app::AkSoundEngineController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AkSoundEngineController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AkSoundEngineController__Class* get_class() {
            return il2cpp::get_class<app::AkSoundEngineController__Class>(type_info(), "", "AkSoundEngineController");
        }
        inline app::AkSoundEngineController* create() {
            return il2cpp::create_object<app::AkSoundEngineController>(get_class());
        }
    } // namespace AkSoundEngineController
} // namespace app::classes::types
