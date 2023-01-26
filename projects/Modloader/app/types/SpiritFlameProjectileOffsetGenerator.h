#pragma once
#include <Modloader/app/structs/SpiritFlameProjectileOffsetGenerator.h>
#include <Modloader/app/structs/SpiritFlameProjectileOffsetGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritFlameProjectileOffsetGenerator {
        inline app::SpiritFlameProjectileOffsetGenerator__Class** type_info() {
            static app::SpiritFlameProjectileOffsetGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritFlameProjectileOffsetGenerator__Class**)(modloader::win::memory::resolve_rva(0x0475A378));
            }
            return cache;
        }
        inline app::SpiritFlameProjectileOffsetGenerator__Class* get_class() {
            return il2cpp::get_class<app::SpiritFlameProjectileOffsetGenerator__Class>(type_info(), "", "SpiritFlameProjectileOffsetGenerator");
        }
        inline app::SpiritFlameProjectileOffsetGenerator* create() {
            return il2cpp::create_object<app::SpiritFlameProjectileOffsetGenerator>(get_class());
        }
    } // namespace SpiritFlameProjectileOffsetGenerator
} // namespace app::classes::types
