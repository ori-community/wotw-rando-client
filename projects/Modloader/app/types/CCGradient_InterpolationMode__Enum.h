#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CCGradient_InterpolationMode__Enum__Class.h>
#include <Modloader/app/structs/CCGradient_InterpolationMode__Enum.h>

namespace app::classes::types {
    namespace CCGradient_InterpolationMode__Enum {
        namespace {
            inline app::CCGradient_InterpolationMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CCGradient_InterpolationMode__Enum__Class** type_info = &type_info_ref;
        inline app::CCGradient_InterpolationMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CCGradient_InterpolationMode__Enum__Class>(type_info, "", "CCGradient", "InterpolationMode");
        }
        inline app::CCGradient_InterpolationMode__Enum* create() {
            return il2cpp::create_object<app::CCGradient_InterpolationMode__Enum>(get_class());
        }
    } // namespace CCGradient_InterpolationMode__Enum
} // namespace app::classes::types
