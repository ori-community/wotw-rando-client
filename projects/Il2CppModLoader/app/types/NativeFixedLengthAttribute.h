#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeFixedLengthAttribute {
        namespace {
            app::NativeFixedLengthAttribute__Class* type_info_ref = nullptr;
        }
        app::NativeFixedLengthAttribute__Class** type_info = &type_info_ref;
        inline app::NativeFixedLengthAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeFixedLengthAttribute__Class>(type_info, "Unity.Collections", "NativeFixedLengthAttribute");
        }
        inline app::NativeFixedLengthAttribute* create() {
            return il2cpp::create_object<app::NativeFixedLengthAttribute>(get_class());
        }
    } // namespace NativeFixedLengthAttribute
} // namespace app::classes::types
