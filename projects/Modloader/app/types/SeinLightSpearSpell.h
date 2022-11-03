#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLightSpearSpell {
        namespace {
            inline app::SeinLightSpearSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinLightSpearSpell__Class** type_info = &type_info_ref;
        inline app::SeinLightSpearSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinLightSpearSpell__Class>(type_info, "", "SeinLightSpearSpell");
        }
        inline app::SeinLightSpearSpell* create() {
            return il2cpp::create_object<app::SeinLightSpearSpell>(get_class());
        }
    } // namespace SeinLightSpearSpell
} // namespace app::classes::types
