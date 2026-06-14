#pragma once
#include <Modloader/app/structs/WwiseIntegration.h>
#include <Modloader/app/structs/WwiseIntegration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseIntegration {
        inline app::WwiseIntegration__Class** type_info() {
            static app::WwiseIntegration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseIntegration__Class**)(modloader::win::memory::resolve_rva(0x04777990));
            }
            return cache;
        }
        inline app::WwiseIntegration__Class* get_class() {
            return il2cpp::get_class<app::WwiseIntegration__Class>(type_info(), "Moon.Wwise", "WwiseIntegration");
        }
        inline app::WwiseIntegration* create() {
            return il2cpp::create_object<app::WwiseIntegration>(get_class());
        }
    } // namespace WwiseIntegration
} // namespace app::classes::types
