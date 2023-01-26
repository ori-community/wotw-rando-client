#pragma once
#include <Modloader/app/structs/CrossAppDomainChannel.h>
#include <Modloader/app/structs/CrossAppDomainChannel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossAppDomainChannel {
        inline app::CrossAppDomainChannel__Class** type_info() {
            static app::CrossAppDomainChannel__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CrossAppDomainChannel__Class**)(modloader::win::memory::resolve_rva(0x0471DF08));
            }
            return cache;
        }
        inline app::CrossAppDomainChannel__Class* get_class() {
            return il2cpp::get_class<app::CrossAppDomainChannel__Class>(type_info(), "System.Runtime.Remoting.Channels", "CrossAppDomainChannel");
        }
        inline app::CrossAppDomainChannel* create() {
            return il2cpp::create_object<app::CrossAppDomainChannel>(get_class());
        }
    } // namespace CrossAppDomainChannel
} // namespace app::classes::types
