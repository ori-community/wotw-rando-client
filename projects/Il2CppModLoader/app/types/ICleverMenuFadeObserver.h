#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICleverMenuFadeObserver {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICleverMenuFadeObserver__Class** type_info;
        inline app::ICleverMenuFadeObserver__Class* get_class() {
            return il2cpp::get_class<app::ICleverMenuFadeObserver__Class>(type_info, "", "ICleverMenuFadeObserver");
        }
        inline app::ICleverMenuFadeObserver* create() {
            return il2cpp::create_object<app::ICleverMenuFadeObserver>(get_class());
        }
        inline app::ICleverMenuFadeObserver__Array* create_array(int size) {
            return il2cpp::array_new<app::ICleverMenuFadeObserver__Array>(get_class(), size);
        }
    } // namespace ICleverMenuFadeObserver
} // namespace app::classes::types
