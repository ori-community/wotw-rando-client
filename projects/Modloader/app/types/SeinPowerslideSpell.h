#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinPowerslideSpell {
        namespace {
            inline app::SeinPowerslideSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinPowerslideSpell__Class** type_info = &type_info_ref;
        inline app::SeinPowerslideSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinPowerslideSpell__Class>(type_info, "", "SeinPowerslideSpell");
        }
        inline app::SeinPowerslideSpell* create() {
            return il2cpp::create_object<app::SeinPowerslideSpell>(get_class());
        }
    } // namespace SeinPowerslideSpell
} // namespace app::classes::types
