#pragma once
#include <Modloader/app/structs/WotwWwiseBootstrapConfiguration.h>
#include <Modloader/app/structs/WotwWwiseBootstrapConfiguration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WotwWwiseBootstrapConfiguration {
        inline app::WotwWwiseBootstrapConfiguration__Class** type_info() {
            static app::WotwWwiseBootstrapConfiguration__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WotwWwiseBootstrapConfiguration__Class**)(modloader::win::memory::resolve_rva(0x047477B8));
            }
            return cache;
        }
        inline app::WotwWwiseBootstrapConfiguration__Class* get_class() {
            return il2cpp::get_class<app::WotwWwiseBootstrapConfiguration__Class>(type_info(), "", "WotwWwiseBootstrapConfiguration");
        }
        inline app::WotwWwiseBootstrapConfiguration* create() {
            return il2cpp::create_object<app::WotwWwiseBootstrapConfiguration>(get_class());
        }
    } // namespace WotwWwiseBootstrapConfiguration
} // namespace app::classes::types
