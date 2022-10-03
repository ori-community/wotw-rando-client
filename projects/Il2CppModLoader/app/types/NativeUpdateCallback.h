#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace NativeUpdateCallback {
        namespace {
            app::NativeUpdateCallback__Class* type_info_ref = nullptr;
        }
        app::NativeUpdateCallback__Class** type_info = &type_info_ref;
        inline app::NativeUpdateCallback__Class* get_class() {
            return il2cpp::get_class<app::NativeUpdateCallback__Class>(type_info, "UnityEngineInternal.Input", "NativeUpdateCallback");
        }
        inline app::NativeUpdateCallback* create() {
            return il2cpp::create_object<app::NativeUpdateCallback>(get_class());
        }
    } // namespace NativeUpdateCallback
} // namespace app::classes::types
