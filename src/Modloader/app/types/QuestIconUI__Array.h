#pragma once
#include <Modloader/app/structs/QuestIconUI__Array.h>
#include <Modloader/app/structs/QuestIconUI__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestIconUI__Array {
        inline app::QuestIconUI__Array__Class** type_info() {
            static app::QuestIconUI__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestIconUI__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestIconUI__Array__Class* get_class() {
            return il2cpp::get_class<app::QuestIconUI__Array__Class>(type_info(), "", "QuestIconUI[]");
        }
        inline app::QuestIconUI__Array* create() {
            return il2cpp::create_object<app::QuestIconUI__Array>(get_class());
        }
    } // namespace QuestIconUI__Array
} // namespace app::classes::types
