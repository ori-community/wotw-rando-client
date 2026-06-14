#pragma once
#include <Modloader/app/structs/QuestItemType__Enum.h>
#include <Modloader/app/structs/QuestItemType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestItemType__Enum {
        inline app::QuestItemType__Enum__Class** type_info() {
            static app::QuestItemType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QuestItemType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04789A78));
            }
            return cache;
        }
        inline app::QuestItemType__Enum__Class* get_class() {
            return il2cpp::get_class<app::QuestItemType__Enum__Class>(type_info(), "", "QuestItemType");
        }
        inline app::QuestItemType__Enum* create() {
            return il2cpp::create_object<app::QuestItemType__Enum>(get_class());
        }
    } // namespace QuestItemType__Enum
} // namespace app::classes::types
