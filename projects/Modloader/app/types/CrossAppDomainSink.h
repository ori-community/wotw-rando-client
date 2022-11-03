#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CrossAppDomainSink {
        inline app::CrossAppDomainSink__Class** type_info = (app::CrossAppDomainSink__Class**)(modloader::win::memory::resolve_rva(0x0471C368));
        inline app::CrossAppDomainSink__Class* get_class() {
            return il2cpp::get_class<app::CrossAppDomainSink__Class>(type_info, "System.Runtime.Remoting.Channels", "CrossAppDomainSink");
        }
        inline app::CrossAppDomainSink* create() {
            return il2cpp::create_object<app::CrossAppDomainSink>(get_class());
        }
    } // namespace CrossAppDomainSink
} // namespace app::classes::types
