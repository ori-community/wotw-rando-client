#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICleverMenuFadeObserver__Array {
        namespace {
            app::ICleverMenuFadeObserver__Array__Class* type_info_ref = nullptr;
        }
        app::ICleverMenuFadeObserver__Array__Class** type_info = &type_info_ref;
        inline app::ICleverMenuFadeObserver__Array__Class* get_class() {
            return il2cpp::get_class<app::ICleverMenuFadeObserver__Array__Class>(type_info, "", "ICleverMenuFadeObserver[]");
        }
        inline app::ICleverMenuFadeObserver__Array* create() {
            return il2cpp::create_object<app::ICleverMenuFadeObserver__Array>(get_class());
        }
    } // namespace ICleverMenuFadeObserver__Array
} // namespace app::classes::types
