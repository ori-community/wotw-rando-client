#pragma once
#include <Modloader/app/structs/InterpolationMode__Enum.h>
#include <Modloader/app/structs/InterpolationMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InterpolationMode__Enum {
        inline app::InterpolationMode__Enum__Class** type_info() {
            static app::InterpolationMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::InterpolationMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::InterpolationMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::InterpolationMode__Enum__Class>(type_info(), "RootMotion", "InterpolationMode");
        }
        inline app::InterpolationMode__Enum* create() {
            return il2cpp::create_object<app::InterpolationMode__Enum>(get_class());
        }
    } // namespace InterpolationMode__Enum
} // namespace app::classes::types
