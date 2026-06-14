#pragma once
#include <Modloader/app/structs/RemotingProxy.h>
#include <Modloader/app/structs/RemotingProxy__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemotingProxy {
        inline app::RemotingProxy__Class** type_info() {
            static app::RemotingProxy__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemotingProxy__Class**)(modloader::win::memory::resolve_rva(0x04781FD0));
            }
            return cache;
        }
        inline app::RemotingProxy__Class* get_class() {
            return il2cpp::get_class<app::RemotingProxy__Class>(type_info(), "System.Runtime.Remoting.Proxies", "RemotingProxy");
        }
        inline app::RemotingProxy* create() {
            return il2cpp::create_object<app::RemotingProxy>(get_class());
        }
    } // namespace RemotingProxy
} // namespace app::classes::types
