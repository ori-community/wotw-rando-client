#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IMethodReturnMessage__Class.h>

namespace app::classes::types {
    namespace IMethodReturnMessage {
        inline app::IMethodReturnMessage__Class** type_info = (app::IMethodReturnMessage__Class**)(modloader::win::memory::resolve_rva(0x047247D0));
        inline app::IMethodReturnMessage__Class* get_class() {
            return il2cpp::get_class<app::IMethodReturnMessage__Class>(type_info, "System.Runtime.Remoting.Messaging", "IMethodReturnMessage");
        }
    } // namespace IMethodReturnMessage
} // namespace app::classes::types
