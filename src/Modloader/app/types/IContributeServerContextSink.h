#pragma once
#include <Modloader/app/structs/IContributeServerContextSink.h>
#include <Modloader/app/structs/IContributeServerContextSink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IContributeServerContextSink {
        inline app::IContributeServerContextSink__Class** type_info() {
            static app::IContributeServerContextSink__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IContributeServerContextSink__Class**)(modloader::win::memory::resolve_rva(0x0471A6D0));
            }
            return cache;
        }
        inline app::IContributeServerContextSink__Class* get_class() {
            return il2cpp::get_class<app::IContributeServerContextSink__Class>(type_info(), "System.Runtime.Remoting.Contexts", "IContributeServerContextSink");
        }
    } // namespace IContributeServerContextSink
} // namespace app::classes::types
