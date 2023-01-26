#pragma once
#include <Modloader/app/structs/WwiseBootstrap.h>
#include <Modloader/app/structs/WwiseBootstrap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseBootstrap {
        inline app::WwiseBootstrap__Class** type_info() {
            static app::WwiseBootstrap__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseBootstrap__Class**)(modloader::win::memory::resolve_rva(0x04740020));
            }
            return cache;
        }
        inline app::WwiseBootstrap__Class* get_class() {
            return il2cpp::get_class<app::WwiseBootstrap__Class>(type_info(), "Moon.Wwise", "WwiseBootstrap");
        }
        inline app::WwiseBootstrap* create() {
            return il2cpp::create_object<app::WwiseBootstrap>(get_class());
        }
    } // namespace WwiseBootstrap
} // namespace app::classes::types
