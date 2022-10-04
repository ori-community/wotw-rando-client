#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IRemotingTypeInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IRemotingTypeInfo__Class** type_info;
        inline app::IRemotingTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::IRemotingTypeInfo__Class>(type_info, "System.Runtime.Remoting", "IRemotingTypeInfo");
        }
        inline app::IRemotingTypeInfo* create() {
            return il2cpp::create_object<app::IRemotingTypeInfo>(get_class());
        }
    } // namespace IRemotingTypeInfo
} // namespace app::classes::types
