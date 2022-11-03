#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WriteAccessRequiredAttribute {
        namespace {
            inline app::WriteAccessRequiredAttribute__Class* type_info_ref = nullptr;
        }
        inline app::WriteAccessRequiredAttribute__Class** type_info = &type_info_ref;
        inline app::WriteAccessRequiredAttribute__Class* get_class() {
            return il2cpp::get_class<app::WriteAccessRequiredAttribute__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "WriteAccessRequiredAttribute");
        }
        inline app::WriteAccessRequiredAttribute* create() {
            return il2cpp::create_object<app::WriteAccessRequiredAttribute>(get_class());
        }
    } // namespace WriteAccessRequiredAttribute
} // namespace app::classes::types
