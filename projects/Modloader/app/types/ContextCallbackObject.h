#pragma once
#include <Modloader/app/structs/ContextCallbackObject.h>
#include <Modloader/app/structs/ContextCallbackObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContextCallbackObject {
        inline app::ContextCallbackObject__Class** type_info() {
            static app::ContextCallbackObject__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ContextCallbackObject__Class**)(modloader::win::memory::resolve_rva(0x0471BDE0));
            }
            return cache;
        }
        inline app::ContextCallbackObject__Class* get_class() {
            return il2cpp::get_class<app::ContextCallbackObject__Class>(type_info(), "System.Runtime.Remoting.Contexts", "ContextCallbackObject");
        }
        inline app::ContextCallbackObject* create() {
            return il2cpp::create_object<app::ContextCallbackObject>(get_class());
        }
    } // namespace ContextCallbackObject
} // namespace app::classes::types
