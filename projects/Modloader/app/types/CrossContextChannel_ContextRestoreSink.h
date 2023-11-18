#pragma once
#include <Modloader/app/structs/CrossContextChannel_ContextRestoreSink.h>
#include <Modloader/app/structs/CrossContextChannel_ContextRestoreSink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrossContextChannel_ContextRestoreSink {
        inline app::CrossContextChannel_ContextRestoreSink__Class** type_info() {
            static app::CrossContextChannel_ContextRestoreSink__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CrossContextChannel_ContextRestoreSink__Class**)(modloader::win::memory::resolve_rva(0x04781A10));
            }
            return cache;
        }
        inline app::CrossContextChannel_ContextRestoreSink__Class* get_class() {
            return il2cpp::get_nested_class<app::CrossContextChannel_ContextRestoreSink__Class>(type_info(), "System.Runtime.Remoting.Contexts", "CrossContextChannel", "ContextRestoreSink");
        }
        inline app::CrossContextChannel_ContextRestoreSink* create() {
            return il2cpp::create_object<app::CrossContextChannel_ContextRestoreSink>(get_class());
        }
    } // namespace CrossContextChannel_ContextRestoreSink
} // namespace app::classes::types
