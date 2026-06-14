#pragma once
#include <Modloader/app/structs/QuestIconsUI_c.h>
#include <Modloader/app/structs/QuestIconsUI_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace QuestIconsUI_c {
        inline app::QuestIconsUI_c__Class** type_info() {
            static app::QuestIconsUI_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::QuestIconsUI_c__Class**)(modloader::win::memory::resolve_rva(0x0476C840));
            }
            return cache;
        }
        inline app::QuestIconsUI_c__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestIconsUI_c__Class>(type_info(), "", "QuestIconsUI", "<>c");
        }
        inline app::QuestIconsUI_c* create() {
            return il2cpp::create_object<app::QuestIconsUI_c>(get_class());
        }
    } // namespace QuestIconsUI_c
} // namespace app::classes::types
