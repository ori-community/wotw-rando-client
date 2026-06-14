#pragma once
#include <Modloader/app/structs/OneEnergySample.h>
#include <Modloader/app/structs/OneEnergySample__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OneEnergySample {
        inline app::OneEnergySample__Class** type_info() {
            static app::OneEnergySample__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OneEnergySample__Class**)(modloader::win::memory::resolve_rva(0x0471F2D0));
            }
            return cache;
        }
        inline app::OneEnergySample__Class* get_class() {
            return il2cpp::get_class<app::OneEnergySample__Class>(type_info(), "Moon.ArtOptimization", "OneEnergySample");
        }
        inline app::OneEnergySample* create() {
            return il2cpp::create_object<app::OneEnergySample>(get_class());
        }
    } // namespace OneEnergySample
} // namespace app::classes::types
