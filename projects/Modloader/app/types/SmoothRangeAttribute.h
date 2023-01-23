#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SmoothRangeAttribute__Class.h>
#include <Modloader/app/structs/SmoothRangeAttribute.h>

namespace app::classes::types {
    namespace SmoothRangeAttribute {
        namespace {
            inline app::SmoothRangeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::SmoothRangeAttribute__Class** type_info = &type_info_ref;
        inline app::SmoothRangeAttribute__Class* get_class() {
            return il2cpp::get_class<app::SmoothRangeAttribute__Class>(type_info, "", "SmoothRangeAttribute");
        }
        inline app::SmoothRangeAttribute* create() {
            return il2cpp::create_object<app::SmoothRangeAttribute>(get_class());
        }
    } // namespace SmoothRangeAttribute
} // namespace app::classes::types
