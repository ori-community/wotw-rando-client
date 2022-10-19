#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IRemotingTypeInfo {
        inline app::IRemotingTypeInfo__Class** type_info = (app::IRemotingTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04728E40));
        inline app::IRemotingTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::IRemotingTypeInfo__Class>(type_info, "System.Runtime.Remoting", "IRemotingTypeInfo");
        }
    } // namespace IRemotingTypeInfo
} // namespace app::classes::types
