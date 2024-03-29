#pragma once
#include <Modloader/app/structs/QuestIconsUI.h>
#include <Modloader/app/structs/QuestIconsUI__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestIconsUI {
        inline app::QuestIconsUI__Class** type_info() {
            static app::QuestIconsUI__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QuestIconsUI__Class**)(modloader::win::memory::resolve_rva(0x0474B150));
            }
            return cache;
        }
        inline app::QuestIconsUI__Class* get_class() {
            return il2cpp::get_class<app::QuestIconsUI__Class>(type_info(), "", "QuestIconsUI");
        }
        inline app::QuestIconsUI* create() {
            return il2cpp::create_object<app::QuestIconsUI>(get_class());
        }
    } // namespace QuestIconsUI
} // namespace app::classes::types
