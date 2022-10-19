#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestItemType__Enum {
        inline app::QuestItemType__Enum__Class** type_info = (app::QuestItemType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04789A78));
        inline app::QuestItemType__Enum__Class* get_class() {
            return il2cpp::get_class<app::QuestItemType__Enum__Class>(type_info, "", "QuestItemType");
        }
        inline app::QuestItemType__Enum* create() {
            return il2cpp::create_object<app::QuestItemType__Enum>(get_class());
        }
    } // namespace QuestItemType__Enum
} // namespace app::classes::types
