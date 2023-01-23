#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RangeAttribute__Class.h>
#include <Modloader/app/structs/RangeAttribute.h>

namespace app::classes::types {
    namespace RangeAttribute {
        namespace {
            inline app::RangeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::RangeAttribute__Class** type_info = &type_info_ref;
        inline app::RangeAttribute__Class* get_class() {
            return il2cpp::get_class<app::RangeAttribute__Class>(type_info, "UnityEngine", "RangeAttribute");
        }
        inline app::RangeAttribute* create() {
            return il2cpp::create_object<app::RangeAttribute>(get_class());
        }
    } // namespace RangeAttribute
} // namespace app::classes::types
