#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ProxyChain_ProxyEnumerator__Class.h>
#include <Modloader/app/structs/ProxyChain_ProxyEnumerator.h>

namespace app::classes::types {
    namespace ProxyChain_ProxyEnumerator {
        inline app::ProxyChain_ProxyEnumerator__Class** type_info = (app::ProxyChain_ProxyEnumerator__Class**)(modloader::win::memory::resolve_rva(0x0476E4E0));
        inline app::ProxyChain_ProxyEnumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::ProxyChain_ProxyEnumerator__Class>(type_info, "System.Net", "ProxyChain", "ProxyEnumerator");
        }
        inline app::ProxyChain_ProxyEnumerator* create() {
            return il2cpp::create_object<app::ProxyChain_ProxyEnumerator>(get_class());
        }
    } // namespace ProxyChain_ProxyEnumerator
} // namespace app::classes::types
