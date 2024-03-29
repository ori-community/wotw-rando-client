#pragma once
#include <Modloader/app/structs/WwiseBootstrapInitializer.h>
#include <Modloader/app/structs/WwiseBootstrapInitializer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseBootstrapInitializer {
        inline app::WwiseBootstrapInitializer__Class** type_info() {
            static app::WwiseBootstrapInitializer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseBootstrapInitializer__Class**)(modloader::win::memory::resolve_rva(0x04749E98));
            }
            return cache;
        }
        inline app::WwiseBootstrapInitializer__Class* get_class() {
            return il2cpp::get_class<app::WwiseBootstrapInitializer__Class>(type_info(), "", "WwiseBootstrapInitializer");
        }
        inline app::WwiseBootstrapInitializer* create() {
            return il2cpp::create_object<app::WwiseBootstrapInitializer>(get_class());
        }
    } // namespace WwiseBootstrapInitializer
} // namespace app::classes::types
