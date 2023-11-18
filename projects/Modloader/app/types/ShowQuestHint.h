#pragma once
#include <Modloader/app/structs/ShowQuestHint.h>
#include <Modloader/app/structs/ShowQuestHint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowQuestHint {
        inline app::ShowQuestHint__Class** type_info() {
            static app::ShowQuestHint__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowQuestHint__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowQuestHint__Class* get_class() {
            return il2cpp::get_class<app::ShowQuestHint__Class>(type_info(), "", "ShowQuestHint");
        }
        inline app::ShowQuestHint* create() {
            return il2cpp::create_object<app::ShowQuestHint>(get_class());
        }
    } // namespace ShowQuestHint
} // namespace app::classes::types
