#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestItemPickup {
        inline app::QuestItemPickup__Class** type_info = (app::QuestItemPickup__Class**)(modloader::win::memory::resolve_rva(0x047573B8));
        inline app::QuestItemPickup__Class* get_class() {
            return il2cpp::get_class<app::QuestItemPickup__Class>(type_info, "", "QuestItemPickup");
        }
        inline app::QuestItemPickup* create() {
            return il2cpp::create_object<app::QuestItemPickup>(get_class());
        }
    } // namespace QuestItemPickup
} // namespace app::classes::types
