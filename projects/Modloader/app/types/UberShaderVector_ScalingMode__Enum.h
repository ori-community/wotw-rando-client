#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberShaderVector_ScalingMode__Enum__Class.h>
#include <Modloader/app/structs/UberShaderVector_ScalingMode__Enum.h>

namespace app::classes::types {
    namespace UberShaderVector_ScalingMode__Enum {
        namespace {
            inline app::UberShaderVector_ScalingMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UberShaderVector_ScalingMode__Enum__Class** type_info = &type_info_ref;
        inline app::UberShaderVector_ScalingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderVector_ScalingMode__Enum__Class>(type_info, "", "UberShaderVector", "ScalingMode");
        }
        inline app::UberShaderVector_ScalingMode__Enum* create() {
            return il2cpp::create_object<app::UberShaderVector_ScalingMode__Enum>(get_class());
        }
    } // namespace UberShaderVector_ScalingMode__Enum
} // namespace app::classes::types
