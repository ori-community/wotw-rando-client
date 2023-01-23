#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IContributeServerContextSink__Class.h>

namespace app::classes::types {
    namespace IContributeServerContextSink {
        inline app::IContributeServerContextSink__Class** type_info = (app::IContributeServerContextSink__Class**)(modloader::win::memory::resolve_rva(0x0471A6D0));
        inline app::IContributeServerContextSink__Class* get_class() {
            return il2cpp::get_class<app::IContributeServerContextSink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContributeServerContextSink");
        }
    } // namespace IContributeServerContextSink
} // namespace app::classes::types
