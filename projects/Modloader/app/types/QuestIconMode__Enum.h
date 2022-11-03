#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestIconMode__Enum {
        namespace {
            inline app::QuestIconMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::QuestIconMode__Enum__Class** type_info = &type_info_ref;
        inline app::QuestIconMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::QuestIconMode__Enum__Class>(type_info, "", "QuestIconMode");
        }
        inline app::QuestIconMode__Enum* create() {
            return il2cpp::create_object<app::QuestIconMode__Enum>(get_class());
        }
    } // namespace QuestIconMode__Enum
} // namespace app::classes::types
