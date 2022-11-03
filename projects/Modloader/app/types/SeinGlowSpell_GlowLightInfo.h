#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinGlowSpell_GlowLightInfo {
        inline app::SeinGlowSpell_GlowLightInfo__Class** type_info = (app::SeinGlowSpell_GlowLightInfo__Class**)(modloader::win::memory::resolve_rva(0x04770C80));
        inline app::SeinGlowSpell_GlowLightInfo__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGlowSpell_GlowLightInfo__Class>(type_info, "", "SeinGlowSpell", "GlowLightInfo");
        }
        inline app::SeinGlowSpell_GlowLightInfo* create() {
            return il2cpp::create_object<app::SeinGlowSpell_GlowLightInfo>(get_class());
        }
        inline app::SeinGlowSpell_GlowLightInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinGlowSpell_GlowLightInfo__Array>(get_class(), size);
        }
        inline app::SeinGlowSpell_GlowLightInfo__Array* create_array(const std::vector<app::SeinGlowSpell_GlowLightInfo*>& items) {
            return il2cpp::array_new<app::SeinGlowSpell_GlowLightInfo__Array>(get_class(), items);
        }
    } // namespace SeinGlowSpell_GlowLightInfo
} // namespace app::classes::types
