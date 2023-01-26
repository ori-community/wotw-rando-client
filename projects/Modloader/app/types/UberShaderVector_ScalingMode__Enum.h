#pragma once
#include <Modloader/app/structs/UberShaderVector_ScalingMode__Enum.h>
#include <Modloader/app/structs/UberShaderVector_ScalingMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberShaderVector_ScalingMode__Enum {
        inline app::UberShaderVector_ScalingMode__Enum__Class** type_info() {
            static app::UberShaderVector_ScalingMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberShaderVector_ScalingMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberShaderVector_ScalingMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberShaderVector_ScalingMode__Enum__Class>(type_info(), "", "UberShaderVector", "ScalingMode");
        }
        inline app::UberShaderVector_ScalingMode__Enum* create() {
            return il2cpp::create_object<app::UberShaderVector_ScalingMode__Enum>(get_class());
        }
    } // namespace UberShaderVector_ScalingMode__Enum
} // namespace app::classes::types
