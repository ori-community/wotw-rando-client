#pragma once
#include <Modloader/app/structs/QuestItemUI__Array.h>
#include <Modloader/app/structs/QuestItemUI__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestItemUI__Array {
        inline app::QuestItemUI__Array__Class** type_info() {
            static app::QuestItemUI__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestItemUI__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestItemUI__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestItemUI__Array__Class>(type_info(), "", "QuestItemUI[]");
        }
        inline app::QuestItemUI__Array* create() {
            return il2cpp::create_object<app::QuestItemUI__Array>(get_class());
        }
    } // namespace QuestItemUI__Array
} // namespace app::classes::types
