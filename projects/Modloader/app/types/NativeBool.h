#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NativeBool {
        namespace {
            inline app::NativeBool__Class* type_info_ref = nullptr;
        }
        inline app::NativeBool__Class** type_info = &type_info_ref;
        inline app::NativeBool__Class* get_class() {
            return il2cpp::get_class<app::NativeBool__Class>(type_info, "XGamingRuntime.Interop", "NativeBool");
        }
        inline app::NativeBool* create() {
            return il2cpp::create_object<app::NativeBool>(get_class());
        }
        inline app::NativeBool__Boxed* box(app::NativeBool value) {
            return il2cpp::box_value<app::NativeBool__Boxed>(get_class(), value);
        }
    } // namespace NativeBool
} // namespace app::classes::types
