#pragma once
#include <Modloader/app/structs/LogicalCallContext.h>
#include <Modloader/app/structs/LogicalCallContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LogicalCallContext {
        inline app::LogicalCallContext__Class** type_info() {
            static app::LogicalCallContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LogicalCallContext__Class**)(modloader::win::memory::resolve_rva(0x04791AC0));
            }
            return cache;
        }
        inline app::LogicalCallContext__Class* get_class() {
            return il2cpp::get_class<app::LogicalCallContext__Class>(type_info(), "System.Runtime.Remoting.Messaging", "LogicalCallContext");
        }
        inline app::LogicalCallContext* create() {
            return il2cpp::create_object<app::LogicalCallContext>(get_class());
        }
    } // namespace LogicalCallContext
} // namespace app::classes::types
