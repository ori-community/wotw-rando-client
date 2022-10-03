#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PushPullBlock_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PushPullBlock_c__Class** type_info;
        inline app::PushPullBlock_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PushPullBlock_c__Class>(type_info, "", "PushPullBlock", "<>c");
        }
        inline app::PushPullBlock_c* create() {
            return il2cpp::create_object<app::PushPullBlock_c>(get_class());
        }
    } // namespace PushPullBlock_c
} // namespace app::classes::types
