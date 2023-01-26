#pragma once
#include <Modloader/app/structs/QuestItemPickup.h>
#include <Modloader/app/structs/QuestItemPickup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestItemPickup {
        inline app::QuestItemPickup__Class** type_info() {
            static app::QuestItemPickup__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QuestItemPickup__Class**)(modloader::win::memory::resolve_rva(0x047573B8));
            }
            return cache;
        }
        inline app::QuestItemPickup__Class* get_class() {
            return il2cpp::get_class<app::QuestItemPickup__Class>(type_info(), "", "QuestItemPickup");
        }
        inline app::QuestItemPickup* create() {
            return il2cpp::create_object<app::QuestItemPickup>(get_class());
        }
    } // namespace QuestItemPickup
} // namespace app::classes::types
