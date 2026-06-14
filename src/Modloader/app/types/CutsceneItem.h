#pragma once
#include <Modloader/app/structs/CutsceneItem.h>
#include <Modloader/app/structs/CutsceneItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CutsceneItem {
        inline app::CutsceneItem__Class** type_info() {
            static app::CutsceneItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CutsceneItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CutsceneItem__Class* get_class() {
            return il2cpp::get_class<app::CutsceneItem__Class>(type_info(), "", "CutsceneItem");
        }
        inline app::CutsceneItem* create() {
            return il2cpp::create_object<app::CutsceneItem>(get_class());
        }
    } // namespace CutsceneItem
} // namespace app::classes::types
