#pragma once
#include <Modloader/app/structs/SkipCutsceneController.h>
#include <Modloader/app/structs/SkipCutsceneController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkipCutsceneController {
        inline app::SkipCutsceneController__Class** type_info() {
            static app::SkipCutsceneController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkipCutsceneController__Class**)(modloader::win::memory::resolve_rva(0x047993C8));
            }
            return cache;
        }
        inline app::SkipCutsceneController__Class* get_class() {
            return il2cpp::get_class<app::SkipCutsceneController__Class>(type_info(), "", "SkipCutsceneController");
        }
        inline app::SkipCutsceneController* create() {
            return il2cpp::create_object<app::SkipCutsceneController>(get_class());
        }
    } // namespace SkipCutsceneController
} // namespace app::classes::types
