#pragma once
#include <Modloader/app/structs/IDynamicMessageSink.h>
#include <Modloader/app/structs/IDynamicMessageSink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDynamicMessageSink {
        inline app::IDynamicMessageSink__Class** type_info() {
            static app::IDynamicMessageSink__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDynamicMessageSink__Class**)(modloader::win::memory::resolve_rva(0x047099E8));
            }
            return cache;
        }
        inline app::IDynamicMessageSink__Class* get_class() {
            return il2cpp::get_class<app::IDynamicMessageSink__Class>(type_info(), "System.Runtime.Remoting.Contexts", "IDynamicMessageSink");
        }
    } // namespace IDynamicMessageSink
} // namespace app::classes::types
