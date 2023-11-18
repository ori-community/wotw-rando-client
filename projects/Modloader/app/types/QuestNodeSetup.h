#pragma once
#include <Modloader/app/structs/QuestNodeSetup.h>
#include <Modloader/app/structs/QuestNodeSetup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestNodeSetup {
        inline app::QuestNodeSetup__Class** type_info() {
            static app::QuestNodeSetup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::QuestNodeSetup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::QuestNodeSetup__Class* get_class() {
            return il2cpp::get_class<app::QuestNodeSetup__Class>(type_info(), "", "QuestNodeSetup");
        }
        inline app::QuestNodeSetup* create() {
            return il2cpp::create_object<app::QuestNodeSetup>(get_class());
        }
    } // namespace QuestNodeSetup
} // namespace app::classes::types
