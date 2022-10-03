#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjRef {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjRef__Class** type_info;
        inline app::ObjRef__Class* get_class() {
            return il2cpp::get_class<app::ObjRef__Class>(type_info, "System.Runtime.Remoting", "ObjRef");
        }
        inline app::ObjRef* create() {
            return il2cpp::create_object<app::ObjRef>(get_class());
        }
    } // namespace ObjRef
} // namespace app::classes::types
