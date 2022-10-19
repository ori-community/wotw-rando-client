#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IContributeObjectSink {
        inline app::IContributeObjectSink__Class** type_info = (app::IContributeObjectSink__Class**)(modloader::win::memory::resolve_rva(0x047392C0));
        inline app::IContributeObjectSink__Class* get_class() {
            return il2cpp::get_class<app::IContributeObjectSink__Class>(type_info, "System.Runtime.Remoting.Contexts", "IContributeObjectSink");
        }
    } // namespace IContributeObjectSink
} // namespace app::classes::types
