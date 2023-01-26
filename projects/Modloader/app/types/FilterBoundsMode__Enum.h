#pragma once
#include <Modloader/app/structs/FilterBoundsMode__Enum.h>
#include <Modloader/app/structs/FilterBoundsMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FilterBoundsMode__Enum {
        inline app::FilterBoundsMode__Enum__Class** type_info() {
            static app::FilterBoundsMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FilterBoundsMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FilterBoundsMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FilterBoundsMode__Enum__Class>(type_info(), "UnityEngine.Experimental.Rendering", "FilterBoundsMode");
        }
        inline app::FilterBoundsMode__Enum* create() {
            return il2cpp::create_object<app::FilterBoundsMode__Enum>(get_class());
        }
    } // namespace FilterBoundsMode__Enum
} // namespace app::classes::types
