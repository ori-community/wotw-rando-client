#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace InteractionSystemTestGUI {
        namespace {
            inline app::InteractionSystemTestGUI__Class* type_info_ref = nullptr;
        }
        inline app::InteractionSystemTestGUI__Class** type_info = &type_info_ref;
        inline app::InteractionSystemTestGUI__Class* get_class() {
            return il2cpp::get_class<app::InteractionSystemTestGUI__Class>(type_info, "RootMotion.Demos", "InteractionSystemTestGUI");
        }
        inline app::InteractionSystemTestGUI* create() {
            return il2cpp::create_object<app::InteractionSystemTestGUI>(get_class());
        }
    } // namespace InteractionSystemTestGUI
} // namespace app::classes::types
