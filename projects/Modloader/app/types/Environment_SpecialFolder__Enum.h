#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Environment_SpecialFolder__Enum {
        namespace {
            inline app::Environment_SpecialFolder__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Environment_SpecialFolder__Enum__Class** type_info = &type_info_ref;
        inline app::Environment_SpecialFolder__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Environment_SpecialFolder__Enum__Class>(type_info, "System", "Environment", "SpecialFolder");
        }
        inline app::Environment_SpecialFolder__Enum* create() {
            return il2cpp::create_object<app::Environment_SpecialFolder__Enum>(get_class());
        }
    } // namespace Environment_SpecialFolder__Enum
} // namespace app::classes::types
