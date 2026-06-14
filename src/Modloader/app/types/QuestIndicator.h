#pragma once
#include <Modloader/app/structs/QuestIndicator.h>
#include <Modloader/app/structs/QuestIndicator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestIndicator {
        inline app::QuestIndicator__Class** type_info() {
            static app::QuestIndicator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestIndicator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestIndicator__Class* get_class() {
            return il2cpp::get_class<app::QuestIndicator__Class>(type_info(), "", "QuestIndicator");
        }
        inline app::QuestIndicator* create() {
            return il2cpp::create_object<app::QuestIndicator>(get_class());
        }
    } // namespace QuestIndicator
} // namespace app::classes::types
