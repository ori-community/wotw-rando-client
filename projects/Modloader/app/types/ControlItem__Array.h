#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ControlItem__Array {
        namespace {
            inline app::ControlItem__Array__Class* type_info_ref = nullptr;
        }
        inline app::ControlItem__Array__Class** type_info = &type_info_ref;
        inline app::ControlItem__Array__Class* get_class() {
            return il2cpp::get_class<app::ControlItem__Array__Class>(type_info, "", "ControlItem[]");
        }
        inline app::ControlItem__Array* create() {
            return il2cpp::create_object<app::ControlItem__Array>(get_class());
        }
    } // namespace ControlItem__Array
} // namespace app::classes::types
