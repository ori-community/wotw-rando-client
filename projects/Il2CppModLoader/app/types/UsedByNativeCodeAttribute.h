#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UsedByNativeCodeAttribute {
        namespace {
            app::UsedByNativeCodeAttribute__Class* type_info_ref = nullptr;
        }
        app::UsedByNativeCodeAttribute__Class** type_info = &type_info_ref;
        inline app::UsedByNativeCodeAttribute__Class* get_class() {
            return il2cpp::get_class<app::UsedByNativeCodeAttribute__Class>(type_info, "UnityEngine.Scripting", "UsedByNativeCodeAttribute");
        }
        inline app::UsedByNativeCodeAttribute* create() {
            return il2cpp::create_object<app::UsedByNativeCodeAttribute>(get_class());
        }
    } // namespace UsedByNativeCodeAttribute
} // namespace app::classes::types
