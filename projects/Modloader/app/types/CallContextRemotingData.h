#pragma once
#include <Modloader/app/structs/CallContextRemotingData.h>
#include <Modloader/app/structs/CallContextRemotingData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallContextRemotingData {
        inline app::CallContextRemotingData__Class** type_info() {
            static app::CallContextRemotingData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CallContextRemotingData__Class**)(modloader::win::memory::resolve_rva(0x0472F9E0));
            }
            return cache;
        }
        inline app::CallContextRemotingData__Class* get_class() {
            return il2cpp::get_class<app::CallContextRemotingData__Class>(type_info(), "System.Runtime.Remoting.Messaging", "CallContextRemotingData");
        }
        inline app::CallContextRemotingData* create() {
            return il2cpp::create_object<app::CallContextRemotingData>(get_class());
        }
    } // namespace CallContextRemotingData
} // namespace app::classes::types
