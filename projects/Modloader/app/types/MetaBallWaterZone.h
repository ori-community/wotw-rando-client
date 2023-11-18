#pragma once
#include <Modloader/app/structs/MetaBallWaterZone.h>
#include <Modloader/app/structs/MetaBallWaterZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MetaBallWaterZone {
        inline app::MetaBallWaterZone__Class** type_info() {
            static app::MetaBallWaterZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MetaBallWaterZone__Class**)(modloader::win::memory::resolve_rva(0x04707888));
            }
            return cache;
        }
        inline app::MetaBallWaterZone__Class* get_class() {
            return il2cpp::get_class<app::MetaBallWaterZone__Class>(type_info(), "", "MetaBallWaterZone");
        }
        inline app::MetaBallWaterZone* create() {
            return il2cpp::create_object<app::MetaBallWaterZone>(get_class());
        }
    } // namespace MetaBallWaterZone
} // namespace app::classes::types
