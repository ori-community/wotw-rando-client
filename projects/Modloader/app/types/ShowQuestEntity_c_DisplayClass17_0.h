#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ShowQuestEntity_c_DisplayClass17_0__Class.h>
#include <Modloader/app/structs/ShowQuestEntity_c_DisplayClass17_0.h>

namespace app::classes::types {
    namespace ShowQuestEntity_c_DisplayClass17_0 {
        inline app::ShowQuestEntity_c_DisplayClass17_0__Class** type_info = (app::ShowQuestEntity_c_DisplayClass17_0__Class**)(modloader::win::memory::resolve_rva(0x04758CC0));
        inline app::ShowQuestEntity_c_DisplayClass17_0__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowQuestEntity_c_DisplayClass17_0__Class>(type_info, "Moon.Timeline", "ShowQuestEntity", "<>c__DisplayClass17_0");
        }
        inline app::ShowQuestEntity_c_DisplayClass17_0* create() {
            return il2cpp::create_object<app::ShowQuestEntity_c_DisplayClass17_0>(get_class());
        }
    } // namespace ShowQuestEntity_c_DisplayClass17_0
} // namespace app::classes::types
