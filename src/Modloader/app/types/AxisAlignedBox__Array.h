#pragma once
#include <Modloader/app/structs/AxisAlignedBox__Array.h>
#include <Modloader/app/structs/AxisAlignedBox__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AxisAlignedBox__Array {
        inline app::AxisAlignedBox__Array__Class** type_info() {
            static app::AxisAlignedBox__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AxisAlignedBox__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AxisAlignedBox__Array__Class* get_class() {
            return il2cpp::get_class<app::AxisAlignedBox__Array__Class>(type_info(), "Moon", "AxisAlignedBox[]");
        }
        inline app::AxisAlignedBox__Array* create() {
            return il2cpp::create_object<app::AxisAlignedBox__Array>(get_class());
        }
    } // namespace AxisAlignedBox__Array
} // namespace app::classes::types
