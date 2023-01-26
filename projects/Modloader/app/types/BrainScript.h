#pragma once
#include <Modloader/app/structs/BrainScript.h>
#include <Modloader/app/structs/BrainScript__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BrainScript {
        inline app::BrainScript__Class** type_info() {
            static app::BrainScript__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BrainScript__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BrainScript__Class* get_class() {
            return il2cpp::get_class<app::BrainScript__Class>(type_info(), "", "BrainScript");
        }
        inline app::BrainScript* create() {
            return il2cpp::create_object<app::BrainScript>(get_class());
        }
    } // namespace BrainScript
} // namespace app::classes::types
