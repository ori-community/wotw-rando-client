#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerticalAnchorMode__Enum_1__Class.h>
#include <Modloader/app/structs/VerticalAnchorMode__Enum_1.h>

namespace app::classes::types {
    namespace VerticalAnchorMode__Enum_1 {
        namespace {
            inline app::VerticalAnchorMode__Enum_1__Class* type_info_ref = nullptr;
        }
        inline app::VerticalAnchorMode__Enum_1__Class** type_info = &type_info_ref;
        inline app::VerticalAnchorMode__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::VerticalAnchorMode__Enum_1__Class>(type_info, "Moon.UI", "VerticalAnchorMode");
        }
        inline app::VerticalAnchorMode__Enum_1* create() {
            return il2cpp::create_object<app::VerticalAnchorMode__Enum_1>(get_class());
        }
    } // namespace VerticalAnchorMode__Enum_1
} // namespace app::classes::types
