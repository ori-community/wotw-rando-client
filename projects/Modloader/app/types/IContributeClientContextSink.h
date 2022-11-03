#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IContributeClientContextSink {
        inline app::IContributeClientContextSink__Class** type_info = (app::IContributeClientContextSink__Class**)(modloader::win::memory::resolve_rva(0x0474C580));
        inline app::IContributeClientContextSink__Class* get_class() {
            return il2cpp::get_class<app::IContributeClientContextSink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContributeClientContextSink");
        }
    } // namespace IContributeClientContextSink
} // namespace app::classes::types
