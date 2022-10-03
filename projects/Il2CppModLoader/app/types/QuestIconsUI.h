#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace QuestIconsUI {
        extern IL2CPP_MODLOADER_DLLEXPORT app::QuestIconsUI__Class** type_info;
        inline app::QuestIconsUI__Class* get_class() {
            return il2cpp::get_class<app::QuestIconsUI__Class>(type_info, "", "QuestIconsUI");
        }
        inline app::QuestIconsUI* create() {
            return il2cpp::create_object<app::QuestIconsUI>(get_class());
        }
    } // namespace QuestIconsUI
} // namespace app::classes::types
