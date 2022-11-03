#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RangeInt {
        namespace {
            inline app::RangeInt__Class* type_info_ref = nullptr;
        }
        inline app::RangeInt__Class** type_info = &type_info_ref;
        inline app::RangeInt__Class* get_class() {
            return il2cpp::get_class<app::RangeInt__Class>(type_info, "UnityEngine", "RangeInt");
        }
        inline app::RangeInt* create() {
            return il2cpp::create_object<app::RangeInt>(get_class());
        }
        inline app::RangeInt__Boxed* box(app::RangeInt value) {
            return il2cpp::box_value<app::RangeInt__Boxed>(get_class(), value);
        }
    } // namespace RangeInt
} // namespace app::classes::types
