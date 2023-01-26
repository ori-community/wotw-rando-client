#pragma once
#include <Modloader/app/structs/SpiritShardIcons_IconTexture__Array.h>
#include <Modloader/app/structs/SpiritShardIcons_IconTexture__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardIcons_IconTexture__Array {
        inline app::SpiritShardIcons_IconTexture__Array__Class** type_info() {
            static app::SpiritShardIcons_IconTexture__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpiritShardIcons_IconTexture__Array__Class**)(modloader::win::memory::resolve_rva(0x04731370));
            }
            return cache;
        }
        inline app::SpiritShardIcons_IconTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardIcons_IconTexture__Array__Class>(type_info(), "", "SpiritShardIcons+IconTexture[]");
        }
        inline app::SpiritShardIcons_IconTexture__Array* create() {
            return il2cpp::create_object<app::SpiritShardIcons_IconTexture__Array>(get_class());
        }
    } // namespace SpiritShardIcons_IconTexture__Array
} // namespace app::classes::types
