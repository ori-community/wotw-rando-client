#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TargetFrameworkAttribute__Class.h>
#include <Modloader/app/structs/TargetFrameworkAttribute.h>

namespace app::classes::types {
    namespace TargetFrameworkAttribute {
        namespace {
            inline app::TargetFrameworkAttribute__Class* type_info_ref = nullptr;
        }
        inline app::TargetFrameworkAttribute__Class** type_info = &type_info_ref;
        inline app::TargetFrameworkAttribute__Class* get_class() {
            return il2cpp::get_class<app::TargetFrameworkAttribute__Class>(type_info, "System.Runtime.Versioning", "TargetFrameworkAttribute");
        }
        inline app::TargetFrameworkAttribute* create() {
            return il2cpp::create_object<app::TargetFrameworkAttribute>(get_class());
        }
    } // namespace TargetFrameworkAttribute
} // namespace app::classes::types
