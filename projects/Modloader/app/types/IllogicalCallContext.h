#pragma once
#include <Modloader/app/structs/IllogicalCallContext.h>
#include <Modloader/app/structs/IllogicalCallContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IllogicalCallContext {
        inline app::IllogicalCallContext__Class** type_info() {
            static app::IllogicalCallContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IllogicalCallContext__Class**)(modloader::win::memory::resolve_rva(0x04728678));
            }
            return cache;
        }
        inline app::IllogicalCallContext__Class* get_class() {
            return il2cpp::get_class<app::IllogicalCallContext__Class>(type_info(), "System.Runtime.Remoting.Messaging", "IllogicalCallContext");
        }
        inline app::IllogicalCallContext* create() {
            return il2cpp::create_object<app::IllogicalCallContext>(get_class());
        }
    } // namespace IllogicalCallContext
} // namespace app::classes::types
