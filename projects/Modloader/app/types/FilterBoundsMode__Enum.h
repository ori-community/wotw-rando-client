#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FilterBoundsMode__Enum {
        namespace {
            inline app::FilterBoundsMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FilterBoundsMode__Enum__Class** type_info = &type_info_ref;
        inline app::FilterBoundsMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::FilterBoundsMode__Enum__Class>(type_info, "UnityEngine.Experimental.Rendering", "FilterBoundsMode");
        }
        inline app::FilterBoundsMode__Enum* create() {
            return il2cpp::create_object<app::FilterBoundsMode__Enum>(get_class());
        }
    } // namespace FilterBoundsMode__Enum
} // namespace app::classes::types
