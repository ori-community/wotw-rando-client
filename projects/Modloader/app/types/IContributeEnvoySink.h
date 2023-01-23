#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IContributeEnvoySink__Class.h>

namespace app::classes::types {
    namespace IContributeEnvoySink {
        inline app::IContributeEnvoySink__Class** type_info = (app::IContributeEnvoySink__Class**)(modloader::win::memory::resolve_rva(0x04718BF8));
        inline app::IContributeEnvoySink__Class* get_class() {
            return il2cpp::get_class<app::IContributeEnvoySink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContributeEnvoySink");
        }
    } // namespace IContributeEnvoySink
} // namespace app::classes::types
