#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ObjRefSurrogate {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ObjRefSurrogate__Class** type_info;
        inline app::ObjRefSurrogate__Class* get_class() {
            return il2cpp::get_class<app::ObjRefSurrogate__Class>(type_info, "System.Runtime.Remoting.Messaging", "ObjRefSurrogate");
        }
        inline app::ObjRefSurrogate* create() {
            return il2cpp::create_object<app::ObjRefSurrogate>(get_class());
        }
    } // namespace ObjRefSurrogate
} // namespace app::classes::types
