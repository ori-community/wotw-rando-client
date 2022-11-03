#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TypeLibVersionAttribute {
        namespace {
            inline app::TypeLibVersionAttribute__Class* type_info_ref = nullptr;
        }
        inline app::TypeLibVersionAttribute__Class** type_info = &type_info_ref;
        inline app::TypeLibVersionAttribute__Class* get_class() {
            return il2cpp::get_class<app::TypeLibVersionAttribute__Class>(type_info, "System.Runtime.InteropServices", "TypeLibVersionAttribute");
        }
        inline app::TypeLibVersionAttribute* create() {
            return il2cpp::create_object<app::TypeLibVersionAttribute>(get_class());
        }
    } // namespace TypeLibVersionAttribute
} // namespace app::classes::types
