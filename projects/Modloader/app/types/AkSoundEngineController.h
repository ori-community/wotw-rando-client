#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AkSoundEngineController__Class.h>
#include <Modloader/app/structs/AkSoundEngineController.h>

namespace app::classes::types {
    namespace AkSoundEngineController {
        namespace {
            inline app::AkSoundEngineController__Class* type_info_ref = nullptr;
        }
        inline app::AkSoundEngineController__Class** type_info = &type_info_ref;
        inline app::AkSoundEngineController__Class* get_class() {
            return il2cpp::get_class<app::AkSoundEngineController__Class>(type_info, "", "AkSoundEngineController");
        }
        inline app::AkSoundEngineController* create() {
            return il2cpp::create_object<app::AkSoundEngineController>(get_class());
        }
    } // namespace AkSoundEngineController
} // namespace app::classes::types
