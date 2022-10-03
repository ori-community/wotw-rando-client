#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GoThroughPlatform {
        extern IL2CPP_MODLOADER_DLLEXPORT app::GoThroughPlatform__Class** type_info;
        inline app::GoThroughPlatform__Class* get_class() {
            return il2cpp::get_class<app::GoThroughPlatform__Class>(type_info, "", "GoThroughPlatform");
        }
        inline app::GoThroughPlatform* create() {
            return il2cpp::create_object<app::GoThroughPlatform>(get_class());
        }
        inline app::GoThroughPlatform__Array* create_array(int size) {
            return il2cpp::array_new<app::GoThroughPlatform__Array>(get_class(), size);
        }
    } // namespace GoThroughPlatform
} // namespace app::classes::types
