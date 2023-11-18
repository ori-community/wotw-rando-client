#pragma once
#include <Modloader/app/structs/IContributeClientContextSink.h>
#include <Modloader/app/structs/IContributeClientContextSink__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IContributeClientContextSink {
        inline app::IContributeClientContextSink__Class** type_info() {
            static app::IContributeClientContextSink__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IContributeClientContextSink__Class**)(modloader::win::memory::resolve_rva(0x0474C580));
            }
            return cache;
        }
        inline app::IContributeClientContextSink__Class* get_class() {
            return il2cpp::get_class<app::IContributeClientContextSink__Class>(type_info(), "System.Runtime.Remoting.Contexts", "IContributeClientContextSink");
        }
    } // namespace IContributeClientContextSink
} // namespace app::classes::types
