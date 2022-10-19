#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MenuScreenStack {
        namespace {
            inline app::MenuScreenStack__Class* type_info_ref = nullptr;
        }
        inline app::MenuScreenStack__Class** type_info = &type_info_ref;
        inline app::MenuScreenStack__Class* get_class() {
            return il2cpp::get_class<app::MenuScreenStack__Class>(type_info, "", "MenuScreenStack");
        }
        inline app::MenuScreenStack* create() {
            return il2cpp::create_object<app::MenuScreenStack>(get_class());
        }
    } // namespace MenuScreenStack
} // namespace app::classes::types
