#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DispIdAttribute {
        namespace {
            inline app::DispIdAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DispIdAttribute__Class** type_info = &type_info_ref;
        inline app::DispIdAttribute__Class* get_class() {
            return il2cpp::get_class<app::DispIdAttribute__Class>(type_info, "System.Runtime.InteropServices", "DispIdAttribute");
        }
        inline app::DispIdAttribute* create() {
            return il2cpp::create_object<app::DispIdAttribute>(get_class());
        }
    } // namespace DispIdAttribute
} // namespace app::classes::types
