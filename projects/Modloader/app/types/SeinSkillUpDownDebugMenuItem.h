#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinSkillUpDownDebugMenuItem__Class.h>
#include <Modloader/app/structs/SeinSkillUpDownDebugMenuItem.h>

namespace app::classes::types {
    namespace SeinSkillUpDownDebugMenuItem {
        inline app::SeinSkillUpDownDebugMenuItem__Class** type_info = (app::SeinSkillUpDownDebugMenuItem__Class**)(modloader::win::memory::resolve_rva(0x04766A40));
        inline app::SeinSkillUpDownDebugMenuItem__Class* get_class() {
            return il2cpp::get_class<app::SeinSkillUpDownDebugMenuItem__Class>(type_info, "", "SeinSkillUpDownDebugMenuItem");
        }
        inline app::SeinSkillUpDownDebugMenuItem* create() {
            return il2cpp::create_object<app::SeinSkillUpDownDebugMenuItem>(get_class());
        }
    } // namespace SeinSkillUpDownDebugMenuItem
} // namespace app::classes::types
