#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SinkProviderData {
        inline app::SinkProviderData__Class** type_info = (app::SinkProviderData__Class**)(modloader::win::memory::resolve_rva(0x04767C80));
        inline app::SinkProviderData__Class* get_class() {
            return il2cpp::get_class<app::SinkProviderData__Class>(type_info, "System.Runtime.Remoting.Channels", "SinkProviderData");
        }
        inline app::SinkProviderData* create() {
            return il2cpp::create_object<app::SinkProviderData>(get_class());
        }
    } // namespace SinkProviderData
} // namespace app::classes::types
