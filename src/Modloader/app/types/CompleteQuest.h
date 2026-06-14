#pragma once
#include <Modloader/app/structs/CompleteQuest.h>
#include <Modloader/app/structs/CompleteQuest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompleteQuest {
        inline app::CompleteQuest__Class** type_info() {
            static app::CompleteQuest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CompleteQuest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CompleteQuest__Class* get_class() {
            return il2cpp::get_class<app::CompleteQuest__Class>(type_info(), "", "CompleteQuest");
        }
        inline app::CompleteQuest* create() {
            return il2cpp::create_object<app::CompleteQuest>(get_class());
        }
    } // namespace CompleteQuest
} // namespace app::classes::types
