#pragma once
#include <Modloader/app/structs/ShowQuestEntity_c.h>
#include <Modloader/app/structs/ShowQuestEntity_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowQuestEntity_c {
        inline app::ShowQuestEntity_c__Class** type_info() {
            static app::ShowQuestEntity_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShowQuestEntity_c__Class**)(modloader::win::memory::resolve_rva(0x0472B5A0));
            }
            return cache;
        }
        inline app::ShowQuestEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowQuestEntity_c__Class>(type_info(), "Moon.Timeline", "ShowQuestEntity", "<>c");
        }
        inline app::ShowQuestEntity_c* create() {
            return il2cpp::create_object<app::ShowQuestEntity_c>(get_class());
        }
    } // namespace ShowQuestEntity_c
} // namespace app::classes::types
