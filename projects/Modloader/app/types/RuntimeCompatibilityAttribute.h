#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RuntimeCompatibilityAttribute__Class.h>
#include <Modloader/app/structs/RuntimeCompatibilityAttribute.h>

namespace app::classes::types {
    namespace RuntimeCompatibilityAttribute {
        namespace {
            inline app::RuntimeCompatibilityAttribute__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeCompatibilityAttribute__Class** type_info = &type_info_ref;
        inline app::RuntimeCompatibilityAttribute__Class* get_class() {
            return il2cpp::get_class<app::RuntimeCompatibilityAttribute__Class>(type_info, "System.Runtime.CompilerServices", "RuntimeCompatibilityAttribute");
        }
        inline app::RuntimeCompatibilityAttribute* create() {
            return il2cpp::create_object<app::RuntimeCompatibilityAttribute>(get_class());
        }
    } // namespace RuntimeCompatibilityAttribute
} // namespace app::classes::types
