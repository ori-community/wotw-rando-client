#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MessageBoxVisibility {
        namespace {
            inline app::MessageBoxVisibility__Class* type_info_ref = nullptr;
        }
        inline app::MessageBoxVisibility__Class** type_info = &type_info_ref;
        inline app::MessageBoxVisibility__Class* get_class() {
            return il2cpp::get_class<app::MessageBoxVisibility__Class>(type_info, "", "MessageBoxVisibility");
        }
        inline app::MessageBoxVisibility* create() {
            return il2cpp::create_object<app::MessageBoxVisibility>(get_class());
        }
    } // namespace MessageBoxVisibility
} // namespace app::classes::types
