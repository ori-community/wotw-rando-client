#pragma once
#include <Modloader/app/structs/SkipCutsceneController_c.h>
#include <Modloader/app/structs/SkipCutsceneController_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkipCutsceneController_c {
        inline app::SkipCutsceneController_c__Class** type_info() {
            static app::SkipCutsceneController_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkipCutsceneController_c__Class**)(modloader::win::memory::resolve_rva(0x04757CD8));
            }
            return cache;
        }
        inline app::SkipCutsceneController_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkipCutsceneController_c__Class>(type_info(), "", "SkipCutsceneController", "<>c");
        }
        inline app::SkipCutsceneController_c* create() {
            return il2cpp::create_object<app::SkipCutsceneController_c>(get_class());
        }
    } // namespace SkipCutsceneController_c
} // namespace app::classes::types
