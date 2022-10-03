#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestItemPickup {
        extern IL2CPP_MODLOADER_DLLEXPORT app::QuestItemPickup__Class** type_info;
        inline app::QuestItemPickup__Class* get_class() {
            return il2cpp::get_class<app::QuestItemPickup__Class>(type_info, "", "QuestItemPickup");
        }
        inline app::QuestItemPickup* create() {
            return il2cpp::create_object<app::QuestItemPickup>(get_class());
        }
    } // namespace QuestItemPickup
} // namespace app::classes::types
