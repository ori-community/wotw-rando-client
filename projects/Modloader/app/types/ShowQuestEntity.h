#pragma once
#include <Modloader/app/structs/ShowQuestEntity.h>
#include <Modloader/app/structs/ShowQuestEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowQuestEntity {
        inline app::ShowQuestEntity__Class** type_info() {
            static app::ShowQuestEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShowQuestEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShowQuestEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowQuestEntity__Class>(type_info(), "Moon.Timeline", "ShowQuestEntity");
        }
        inline app::ShowQuestEntity* create() {
            return il2cpp::create_object<app::ShowQuestEntity>(get_class());
        }
    } // namespace ShowQuestEntity
} // namespace app::classes::types
