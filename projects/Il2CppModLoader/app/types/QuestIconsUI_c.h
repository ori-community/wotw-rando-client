#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace QuestIconsUI_c {
        inline app::QuestIconsUI_c__Class** type_info = (app::QuestIconsUI_c__Class**)(modloader::win::memory::resolve_rva(0x0476C840));
        inline app::QuestIconsUI_c__Class* get_class() {
            return il2cpp::get_nested_class<app::QuestIconsUI_c__Class>(type_info, "", "QuestIconsUI", "<>c");
        }
        inline app::QuestIconsUI_c* create() {
            return il2cpp::create_object<app::QuestIconsUI_c>(get_class());
        }
    } // namespace QuestIconsUI_c
} // namespace app::classes::types
