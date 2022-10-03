#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RemotingException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RemotingException__Class** type_info;
        inline app::RemotingException__Class* get_class() {
            return il2cpp::get_class<app::RemotingException__Class>(type_info, "System.Runtime.Remoting", "RemotingException");
        }
        inline app::RemotingException* create() {
            return il2cpp::create_object<app::RemotingException>(get_class());
        }
    } // namespace RemotingException
} // namespace app::classes::types
