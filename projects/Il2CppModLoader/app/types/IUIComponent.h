#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUIComponent {
        namespace {
            inline app::IUIComponent__Class* type_info_ref = nullptr;
        }
        inline app::IUIComponent__Class** type_info = &type_info_ref;
        inline app::IUIComponent__Class* get_class() {
            return il2cpp::get_class<app::IUIComponent__Class>(type_info, "Moon.UI", "IUIComponent");
        }
    } // namespace IUIComponent
} // namespace app::classes::types
