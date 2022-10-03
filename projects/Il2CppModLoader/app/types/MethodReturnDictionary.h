#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MethodReturnDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MethodReturnDictionary__Class** type_info;
        inline app::MethodReturnDictionary__Class* get_class() {
            return il2cpp::get_class<app::MethodReturnDictionary__Class>(type_info, "System.Runtime.Remoting.Messaging", "MethodReturnDictionary");
        }
        inline app::MethodReturnDictionary* create() {
            return il2cpp::create_object<app::MethodReturnDictionary>(get_class());
        }
    } // namespace MethodReturnDictionary
} // namespace app::classes::types
