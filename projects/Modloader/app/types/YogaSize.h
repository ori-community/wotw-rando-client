#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/YogaSize__Class.h>
#include <Modloader/app/structs/YogaSize.h>
#include <Modloader/app/structs/YogaSize__Boxed.h>

namespace app::classes::types {
    namespace YogaSize {
        namespace {
            inline app::YogaSize__Class* type_info_ref = nullptr;
        }
        inline app::YogaSize__Class** type_info = &type_info_ref;
        inline app::YogaSize__Class* get_class() {
            return il2cpp::get_class<app::YogaSize__Class>(type_info, "UnityEngine.Yoga", "YogaSize");
        }
        inline app::YogaSize* create() {
            return il2cpp::create_object<app::YogaSize>(get_class());
        }
        inline app::YogaSize__Boxed* box(app::YogaSize value) {
            return il2cpp::box_value<app::YogaSize__Boxed>(get_class(), value);
        }
    } // namespace YogaSize
} // namespace app::classes::types
