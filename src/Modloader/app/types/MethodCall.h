#pragma once
#include <Modloader/app/structs/MethodCall.h>
#include <Modloader/app/structs/MethodCall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MethodCall {
        inline app::MethodCall__Class** type_info() {
            static app::MethodCall__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MethodCall__Class**)(modloader::win::memory::resolve_rva(0x04773EB0));
            }
            return cache;
        }
        inline app::MethodCall__Class* get_class() {
            return il2cpp::get_class<app::MethodCall__Class>(type_info(), "System.Runtime.Remoting.Messaging", "MethodCall");
        }
        inline app::MethodCall* create() {
            return il2cpp::create_object<app::MethodCall>(get_class());
        }
    } // namespace MethodCall
} // namespace app::classes::types
