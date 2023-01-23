#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IllogicalCallContext__Class.h>
#include <Modloader/app/structs/IllogicalCallContext.h>

namespace app::classes::types {
    namespace IllogicalCallContext {
        inline app::IllogicalCallContext__Class** type_info = (app::IllogicalCallContext__Class**)(modloader::win::memory::resolve_rva(0x04728678));
        inline app::IllogicalCallContext__Class* get_class() {
            return il2cpp::get_class<app::IllogicalCallContext__Class>(type_info, "System.Runtime.Remoting.Messaging", "IllogicalCallContext");
        }
        inline app::IllogicalCallContext* create() {
            return il2cpp::create_object<app::IllogicalCallContext>(get_class());
        }
    } // namespace IllogicalCallContext
} // namespace app::classes::types
