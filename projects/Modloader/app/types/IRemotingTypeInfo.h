#pragma once
#include <Modloader/app/structs/IRemotingTypeInfo.h>
#include <Modloader/app/structs/IRemotingTypeInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRemotingTypeInfo {
        inline app::IRemotingTypeInfo__Class** type_info() {
            static app::IRemotingTypeInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRemotingTypeInfo__Class**)(modloader::win::memory::resolve_rva(0x04728E40));
            }
            return cache;
        }
        inline app::IRemotingTypeInfo__Class* get_class() {
            return il2cpp::get_class<app::IRemotingTypeInfo__Class>(type_info(), "System.Runtime.Remoting", "IRemotingTypeInfo");
        }
    } // namespace IRemotingTypeInfo
} // namespace app::classes::types
