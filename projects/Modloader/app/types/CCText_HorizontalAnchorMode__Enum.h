#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CCText_HorizontalAnchorMode__Enum {
        namespace {
            inline app::CCText_HorizontalAnchorMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CCText_HorizontalAnchorMode__Enum__Class** type_info = &type_info_ref;
        inline app::CCText_HorizontalAnchorMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CCText_HorizontalAnchorMode__Enum__Class>(type_info, "", "CCText", "HorizontalAnchorMode");
        }
        inline app::CCText_HorizontalAnchorMode__Enum* create() {
            return il2cpp::create_object<app::CCText_HorizontalAnchorMode__Enum>(get_class());
        }
    } // namespace CCText_HorizontalAnchorMode__Enum
} // namespace app::classes::types
