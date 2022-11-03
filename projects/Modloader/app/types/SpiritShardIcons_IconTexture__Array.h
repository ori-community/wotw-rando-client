#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpiritShardIcons_IconTexture__Array {
        inline app::SpiritShardIcons_IconTexture__Array__Class** type_info = (app::SpiritShardIcons_IconTexture__Array__Class**)(modloader::win::memory::resolve_rva(0x04731370));
        inline app::SpiritShardIcons_IconTexture__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardIcons_IconTexture__Array__Class>(type_info, "", "SpiritShardIcons+IconTexture[]");
        }
        inline app::SpiritShardIcons_IconTexture__Array* create() {
            return il2cpp::create_object<app::SpiritShardIcons_IconTexture__Array>(get_class());
        }
    } // namespace SpiritShardIcons_IconTexture__Array
} // namespace app::classes::types
