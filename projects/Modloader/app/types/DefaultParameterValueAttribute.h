#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DefaultParameterValueAttribute {
        namespace {
            inline app::DefaultParameterValueAttribute__Class* type_info_ref = nullptr;
        }
        inline app::DefaultParameterValueAttribute__Class** type_info = &type_info_ref;
        inline app::DefaultParameterValueAttribute__Class* get_class() {
            return il2cpp::get_class<app::DefaultParameterValueAttribute__Class>(type_info, "System.Runtime.InteropServices", "DefaultParameterValueAttribute");
        }
        inline app::DefaultParameterValueAttribute* create() {
            return il2cpp::create_object<app::DefaultParameterValueAttribute>(get_class());
        }
    } // namespace DefaultParameterValueAttribute
} // namespace app::classes::types
