#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IContributeObjectSink__Class.h>

namespace app::classes::types {
    namespace IContributeObjectSink {
        inline app::IContributeObjectSink__Class** type_info = (app::IContributeObjectSink__Class**)(modloader::win::memory::resolve_rva(0x047392C0));
        inline app::IContributeObjectSink__Class* get_class() {
            return il2cpp::get_class<app::IContributeObjectSink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContributeObjectSink");
        }
    } // namespace IContributeObjectSink
} // namespace app::classes::types
