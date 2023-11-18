#pragma once
#include <Modloader/app/structs/SinkProviderData.h>
#include <Modloader/app/structs/SinkProviderData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SinkProviderData {
        inline app::SinkProviderData__Class** type_info() {
            static app::SinkProviderData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SinkProviderData__Class**)(modloader::win::memory::resolve_rva(0x04767C80));
            }
            return cache;
        }
        inline app::SinkProviderData__Class* get_class() {
            return il2cpp::get_class<app::SinkProviderData__Class>(type_info(), "System.Runtime.Remoting.Channels", "SinkProviderData");
        }
        inline app::SinkProviderData* create() {
            return il2cpp::create_object<app::SinkProviderData>(get_class());
        }
    } // namespace SinkProviderData
} // namespace app::classes::types
