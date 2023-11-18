#pragma once
#include <Modloader/app/structs/AddQuest.h>
#include <Modloader/app/structs/AddQuest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AddQuest {
        inline app::AddQuest__Class** type_info() {
            static app::AddQuest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AddQuest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AddQuest__Class* get_class() {
            return il2cpp::get_class<app::AddQuest__Class>(type_info(), "", "AddQuest");
        }
        inline app::AddQuest* create() {
            return il2cpp::create_object<app::AddQuest>(get_class());
        }
    } // namespace AddQuest
} // namespace app::classes::types
