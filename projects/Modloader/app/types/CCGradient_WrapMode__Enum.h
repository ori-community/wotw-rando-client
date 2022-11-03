#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CCGradient_WrapMode__Enum {
        namespace {
            inline app::CCGradient_WrapMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CCGradient_WrapMode__Enum__Class** type_info = &type_info_ref;
        inline app::CCGradient_WrapMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CCGradient_WrapMode__Enum__Class>(type_info, "", "CCGradient", "WrapMode");
        }
        inline app::CCGradient_WrapMode__Enum* create() {
            return il2cpp::create_object<app::CCGradient_WrapMode__Enum>(get_class());
        }
    } // namespace CCGradient_WrapMode__Enum
} // namespace app::classes::types
