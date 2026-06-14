#pragma once
#include <Modloader/app/structs/QuestIconMode__Enum.h>
#include <Modloader/app/structs/QuestIconMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestIconMode__Enum {
        inline app::QuestIconMode__Enum__Class** type_info() {
            static app::QuestIconMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestIconMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestIconMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::QuestIconMode__Enum__Class>(type_info(), "", "QuestIconMode");
        }
        inline app::QuestIconMode__Enum* create() {
            return il2cpp::create_object<app::QuestIconMode__Enum>(get_class());
        }
    } // namespace QuestIconMode__Enum
} // namespace app::classes::types
