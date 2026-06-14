#pragma once
#include <Modloader/app/structs/ZeroEnergySample.h>
#include <Modloader/app/structs/ZeroEnergySample__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZeroEnergySample {
        inline app::ZeroEnergySample__Class** type_info() {
            static app::ZeroEnergySample__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ZeroEnergySample__Class**)(modloader::win::memory::resolve_rva(0x0470B780));
            }
            return cache;
        }
        inline app::ZeroEnergySample__Class* get_class() {
            return il2cpp::get_class<app::ZeroEnergySample__Class>(type_info(), "Moon.ArtOptimization", "ZeroEnergySample");
        }
        inline app::ZeroEnergySample* create() {
            return il2cpp::create_object<app::ZeroEnergySample>(get_class());
        }
    } // namespace ZeroEnergySample
} // namespace app::classes::types
