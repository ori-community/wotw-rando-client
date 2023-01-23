#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ColorUsageAttribute__Class.h>
#include <Modloader/app/structs/ColorUsageAttribute.h>

namespace app::classes::types {
    namespace ColorUsageAttribute {
        namespace {
            inline app::ColorUsageAttribute__Class* type_info_ref = nullptr;
        }
        inline app::ColorUsageAttribute__Class** type_info = &type_info_ref;
        inline app::ColorUsageAttribute__Class* get_class() {
            return il2cpp::get_class<app::ColorUsageAttribute__Class>(type_info, "UnityEngine", "ColorUsageAttribute");
        }
        inline app::ColorUsageAttribute* create() {
            return il2cpp::create_object<app::ColorUsageAttribute>(get_class());
        }
    } // namespace ColorUsageAttribute
} // namespace app::classes::types
