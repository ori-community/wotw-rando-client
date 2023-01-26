#pragma once
#include <Modloader/app/structs/CallContextSecurityData.h>
#include <Modloader/app/structs/CallContextSecurityData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallContextSecurityData {
        inline app::CallContextSecurityData__Class** type_info() {
            static app::CallContextSecurityData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CallContextSecurityData__Class**)(modloader::win::memory::resolve_rva(0x0476AA18));
            }
            return cache;
        }
        inline app::CallContextSecurityData__Class* get_class() {
            return il2cpp::get_class<app::CallContextSecurityData__Class>(type_info(), "System.Runtime.Remoting.Messaging", "CallContextSecurityData");
        }
        inline app::CallContextSecurityData* create() {
            return il2cpp::create_object<app::CallContextSecurityData>(get_class());
        }
    } // namespace CallContextSecurityData
} // namespace app::classes::types
