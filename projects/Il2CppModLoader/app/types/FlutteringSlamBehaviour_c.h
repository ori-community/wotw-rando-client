#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FlutteringSlamBehaviour_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FlutteringSlamBehaviour_c__Class** type_info;
        inline app::FlutteringSlamBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FlutteringSlamBehaviour_c__Class>(type_info, "Moon", "FlutteringSlamBehaviour", "<>c");
        }
        inline app::FlutteringSlamBehaviour_c* create() {
            return il2cpp::create_object<app::FlutteringSlamBehaviour_c>(get_class());
        }
    } // namespace FlutteringSlamBehaviour_c
} // namespace app::classes::types
