#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/InterpolationMode__Enum__Class.h>
#include <Modloader/app/structs/InterpolationMode__Enum.h>

namespace app::classes::types {
    namespace InterpolationMode__Enum {
        namespace {
            inline app::InterpolationMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::InterpolationMode__Enum__Class** type_info = &type_info_ref;
        inline app::InterpolationMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::InterpolationMode__Enum__Class>(type_info, "RootMotion", "InterpolationMode");
        }
        inline app::InterpolationMode__Enum* create() {
            return il2cpp::create_object<app::InterpolationMode__Enum>(get_class());
        }
    } // namespace InterpolationMode__Enum
} // namespace app::classes::types
