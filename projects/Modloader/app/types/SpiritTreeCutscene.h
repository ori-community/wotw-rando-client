#pragma once
#include <Modloader/app/structs/SpiritTreeCutscene.h>
#include <Modloader/app/structs/SpiritTreeCutscene__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritTreeCutscene {
        inline app::SpiritTreeCutscene__Class** type_info() {
            static app::SpiritTreeCutscene__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritTreeCutscene__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritTreeCutscene__Class* get_class() {
            return il2cpp::get_class<app::SpiritTreeCutscene__Class>(type_info(), "", "SpiritTreeCutscene");
        }
        inline app::SpiritTreeCutscene* create() {
            return il2cpp::create_object<app::SpiritTreeCutscene>(get_class());
        }
    } // namespace SpiritTreeCutscene
} // namespace app::classes::types
