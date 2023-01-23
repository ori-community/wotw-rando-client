#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinTrapSpell__Class.h>
#include <Modloader/app/structs/SeinTrapSpell.h>

namespace app::classes::types {
    namespace SeinTrapSpell {
        namespace {
            inline app::SeinTrapSpell__Class* type_info_ref = nullptr;
        }
        inline app::SeinTrapSpell__Class** type_info = &type_info_ref;
        inline app::SeinTrapSpell__Class* get_class() {
            return il2cpp::get_class<app::SeinTrapSpell__Class>(type_info, "", "SeinTrapSpell");
        }
        inline app::SeinTrapSpell* create() {
            return il2cpp::create_object<app::SeinTrapSpell>(get_class());
        }
    } // namespace SeinTrapSpell
} // namespace app::classes::types
