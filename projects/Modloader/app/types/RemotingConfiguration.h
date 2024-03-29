#pragma once
#include <Modloader/app/structs/RemotingConfiguration.h>
#include <Modloader/app/structs/RemotingConfiguration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemotingConfiguration {
        inline app::RemotingConfiguration__Class** type_info() {
            static app::RemotingConfiguration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RemotingConfiguration__Class**)(modloader::win::memory::resolve_rva(0x0470C880));
            }
            return cache;
        }
        inline app::RemotingConfiguration__Class* get_class() {
            return il2cpp::get_class<app::RemotingConfiguration__Class>(type_info(), "System.Runtime.Remoting", "RemotingConfiguration");
        }
        inline app::RemotingConfiguration* create() {
            return il2cpp::create_object<app::RemotingConfiguration>(get_class());
        }
    } // namespace RemotingConfiguration
} // namespace app::classes::types
