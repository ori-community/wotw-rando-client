#pragma once
#include <Modloader/app/structs/IMethodReturnMessage.h>
#include <Modloader/app/structs/IMethodReturnMessage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IMethodReturnMessage {
        inline app::IMethodReturnMessage__Class** type_info() {
            static app::IMethodReturnMessage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IMethodReturnMessage__Class**)(modloader::win::memory::resolve_rva(0x047247D0));
            }
            return cache;
        }
        inline app::IMethodReturnMessage__Class* get_class() {
            return il2cpp::get_class<app::IMethodReturnMessage__Class>(type_info(), "System.Runtime.Remoting.Messaging", "IMethodReturnMessage");
        }
    } // namespace IMethodReturnMessage
} // namespace app::classes::types
