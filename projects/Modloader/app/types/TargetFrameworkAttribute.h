#pragma once
#include <Modloader/app/structs/TargetFrameworkAttribute.h>
#include <Modloader/app/structs/TargetFrameworkAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TargetFrameworkAttribute {
        inline app::TargetFrameworkAttribute__Class** type_info() {
            static app::TargetFrameworkAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TargetFrameworkAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TargetFrameworkAttribute__Class* get_class() {
            return il2cpp::get_class<app::TargetFrameworkAttribute__Class>(type_info(), "System.Runtime.Versioning", "TargetFrameworkAttribute");
        }
        inline app::TargetFrameworkAttribute* create() {
            return il2cpp::create_object<app::TargetFrameworkAttribute>(get_class());
        }
    } // namespace TargetFrameworkAttribute
} // namespace app::classes::types
