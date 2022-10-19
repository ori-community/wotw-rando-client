#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowQuestEntity {
        namespace {
            inline app::ShowQuestEntity__Class* type_info_ref = nullptr;
        }
        inline app::ShowQuestEntity__Class** type_info = &type_info_ref;
        inline app::ShowQuestEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowQuestEntity__Class>(type_info, "Moon.Timeline", "ShowQuestEntity");
        }
        inline app::ShowQuestEntity* create() {
            return il2cpp::create_object<app::ShowQuestEntity>(get_class());
        }
    } // namespace ShowQuestEntity
} // namespace app::classes::types
