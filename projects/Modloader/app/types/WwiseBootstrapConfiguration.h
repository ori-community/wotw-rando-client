#pragma once
#include <Modloader/app/structs/WwiseBootstrapConfiguration.h>
#include <Modloader/app/structs/WwiseBootstrapConfiguration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseBootstrapConfiguration {
        inline app::WwiseBootstrapConfiguration__Class** type_info() {
            static app::WwiseBootstrapConfiguration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseBootstrapConfiguration__Class**)(modloader::win::memory::resolve_rva(0x04783AF0));
            }
            return cache;
        }
        inline app::WwiseBootstrapConfiguration__Class* get_class() {
            return il2cpp::get_class<app::WwiseBootstrapConfiguration__Class>(type_info(), "Moon.Wwise", "WwiseBootstrapConfiguration");
        }
        inline app::WwiseBootstrapConfiguration* create() {
            return il2cpp::create_object<app::WwiseBootstrapConfiguration>(get_class());
        }
    } // namespace WwiseBootstrapConfiguration
} // namespace app::classes::types
