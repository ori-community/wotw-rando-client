#pragma once
#include <Modloader/app/structs/IUIComponent.h>
#include <Modloader/app/structs/IUIComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUIComponent {
        inline app::IUIComponent__Class** type_info() {
            static app::IUIComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IUIComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IUIComponent__Class* get_class() {
            return il2cpp::get_class<app::IUIComponent__Class>(type_info(), "Moon.UI", "IUIComponent");
        }
    } // namespace IUIComponent
} // namespace app::classes::types
