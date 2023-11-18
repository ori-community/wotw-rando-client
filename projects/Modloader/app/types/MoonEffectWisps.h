#pragma once
#include <Modloader/app/structs/MoonEffectWisps.h>
#include <Modloader/app/structs/MoonEffectWisps__Array.h>
#include <Modloader/app/structs/MoonEffectWisps__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonEffectWisps {
        inline app::MoonEffectWisps__Class** type_info() {
            static app::MoonEffectWisps__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonEffectWisps__Class**)(modloader::win::memory::resolve_rva(0x04769650));
            }
            return cache;
        }
        inline app::MoonEffectWisps__Class* get_class() {
            return il2cpp::get_class<app::MoonEffectWisps__Class>(type_info(), "Moon.EffectsFramework.Wisps", "MoonEffectWisps");
        }
        inline app::MoonEffectWisps* create() {
            return il2cpp::create_object<app::MoonEffectWisps>(get_class());
        }
        inline app::MoonEffectWisps__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonEffectWisps__Array>(get_class(), size);
        }
        inline app::MoonEffectWisps__Array* create_array(const std::vector<app::MoonEffectWisps*>& items) {
            return il2cpp::array_new<app::MoonEffectWisps__Array>(get_class(), items);
        }
    } // namespace MoonEffectWisps
} // namespace app::classes::types
