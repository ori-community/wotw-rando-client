#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SceneScreenshot {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SceneScreenshot__Class** type_info;
        inline app::SceneScreenshot__Class* get_class() {
            return il2cpp::get_class<app::SceneScreenshot__Class>(type_info, "", "SceneScreenshot");
        }
        inline app::SceneScreenshot* create() {
            return il2cpp::create_object<app::SceneScreenshot>(get_class());
        }
        inline app::SceneScreenshot__Array* create_array(int size) {
            return il2cpp::array_new<app::SceneScreenshot__Array>(get_class(), size);
        }
    } // namespace SceneScreenshot
} // namespace app::classes::types
