#pragma once
#include <Modloader/app/structs/SkipCutscene.h>
#include <Modloader/app/structs/SkipCutscene__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkipCutscene {
        inline app::SkipCutscene__Class** type_info() {
            static app::SkipCutscene__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SkipCutscene__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SkipCutscene__Class* get_class() {
            return il2cpp::get_class<app::SkipCutscene__Class>(type_info(), "", "SkipCutscene");
        }
        inline app::SkipCutscene* create() {
            return il2cpp::create_object<app::SkipCutscene>(get_class());
        }
    } // namespace SkipCutscene
} // namespace app::classes::types
