#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CrossAppDomainChannel__Class.h>
#include <Modloader/app/structs/CrossAppDomainChannel.h>

namespace app::classes::types {
    namespace CrossAppDomainChannel {
        inline app::CrossAppDomainChannel__Class** type_info = (app::CrossAppDomainChannel__Class**)(modloader::win::memory::resolve_rva(0x0471DF08));
        inline app::CrossAppDomainChannel__Class* get_class() {
            return il2cpp::get_class<app::CrossAppDomainChannel__Class>(type_info, "System.Runtime.Remoting.Channels", "CrossAppDomainChannel");
        }
        inline app::CrossAppDomainChannel* create() {
            return il2cpp::create_object<app::CrossAppDomainChannel>(get_class());
        }
    } // namespace CrossAppDomainChannel
} // namespace app::classes::types
