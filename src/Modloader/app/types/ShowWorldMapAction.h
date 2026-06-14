#pragma once
#include <Modloader/app/structs/ShowWorldMapAction.h>
#include <Modloader/app/structs/ShowWorldMapAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowWorldMapAction {
        inline app::ShowWorldMapAction__Class** type_info() {
            static app::ShowWorldMapAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowWorldMapAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowWorldMapAction__Class* get_class() {
            return il2cpp::get_class<app::ShowWorldMapAction__Class>(type_info(), "", "ShowWorldMapAction");
        }
        inline app::ShowWorldMapAction* create() {
            return il2cpp::create_object<app::ShowWorldMapAction>(get_class());
        }
    } // namespace ShowWorldMapAction
} // namespace app::classes::types
