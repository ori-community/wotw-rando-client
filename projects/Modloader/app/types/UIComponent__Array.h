#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UIComponent__Array {
        namespace {
            inline app::UIComponent__Array__Class* type_info_ref = nullptr;
        }
        inline app::UIComponent__Array__Class** type_info = &type_info_ref;
        inline app::UIComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::UIComponent__Array__Class>(type_info, "Moon.UI", "UIComponent[]");
        }
        inline app::UIComponent__Array* create() {
            return il2cpp::create_object<app::UIComponent__Array>(get_class());
        }
    } // namespace UIComponent__Array
} // namespace app::classes::types
