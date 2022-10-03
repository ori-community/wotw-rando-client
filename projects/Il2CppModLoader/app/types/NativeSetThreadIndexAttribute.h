#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeSetThreadIndexAttribute {
        namespace {
            app::NativeSetThreadIndexAttribute__Class* type_info_ref = nullptr;
        }
        app::NativeSetThreadIndexAttribute__Class** type_info = &type_info_ref;
        inline app::NativeSetThreadIndexAttribute__Class* get_class() {
            return il2cpp::get_class<app::NativeSetThreadIndexAttribute__Class>(type_info, "Unity.Collections.LowLevel.Unsafe", "NativeSetThreadIndexAttribute");
        }
        inline app::NativeSetThreadIndexAttribute* create() {
            return il2cpp::create_object<app::NativeSetThreadIndexAttribute>(get_class());
        }
    } // namespace NativeSetThreadIndexAttribute
} // namespace app::classes::types
