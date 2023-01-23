#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IUIComponent__Class.h>

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
