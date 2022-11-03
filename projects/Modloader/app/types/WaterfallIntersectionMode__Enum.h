#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WaterfallIntersectionMode__Enum {
        namespace {
            inline app::WaterfallIntersectionMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WaterfallIntersectionMode__Enum__Class** type_info = &type_info_ref;
        inline app::WaterfallIntersectionMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::WaterfallIntersectionMode__Enum__Class>(type_info, "Moon", "WaterfallIntersectionMode");
        }
        inline app::WaterfallIntersectionMode__Enum* create() {
            return il2cpp::create_object<app::WaterfallIntersectionMode__Enum>(get_class());
        }
    } // namespace WaterfallIntersectionMode__Enum
} // namespace app::classes::types
