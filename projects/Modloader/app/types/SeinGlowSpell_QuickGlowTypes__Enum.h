#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinGlowSpell_QuickGlowTypes__Enum__Class.h>
#include <Modloader/app/structs/SeinGlowSpell_QuickGlowTypes__Enum.h>

namespace app::classes::types {
    namespace SeinGlowSpell_QuickGlowTypes__Enum {
        namespace {
            inline app::SeinGlowSpell_QuickGlowTypes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeinGlowSpell_QuickGlowTypes__Enum__Class** type_info = &type_info_ref;
        inline app::SeinGlowSpell_QuickGlowTypes__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinGlowSpell_QuickGlowTypes__Enum__Class>(type_info, "", "SeinGlowSpell", "QuickGlowTypes");
        }
        inline app::SeinGlowSpell_QuickGlowTypes__Enum* create() {
            return il2cpp::create_object<app::SeinGlowSpell_QuickGlowTypes__Enum>(get_class());
        }
    } // namespace SeinGlowSpell_QuickGlowTypes__Enum
} // namespace app::classes::types
