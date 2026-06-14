#pragma once
#include <Modloader/app/structs/ShowQuest.h>
#include <Modloader/app/structs/ShowQuest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowQuest {
        inline app::ShowQuest__Class** type_info() {
            static app::ShowQuest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowQuest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowQuest__Class* get_class() {
            return il2cpp::get_class<app::ShowQuest__Class>(type_info(), "", "ShowQuest");
        }
        inline app::ShowQuest* create() {
            return il2cpp::create_object<app::ShowQuest>(get_class());
        }
    } // namespace ShowQuest
} // namespace app::classes::types
