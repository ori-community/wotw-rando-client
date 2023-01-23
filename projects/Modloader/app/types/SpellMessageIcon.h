#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpellMessageIcon__Class.h>
#include <Modloader/app/structs/SpellMessageIcon.h>

namespace app::classes::types {
    namespace SpellMessageIcon {
        namespace {
            inline app::SpellMessageIcon__Class* type_info_ref = nullptr;
        }
        inline app::SpellMessageIcon__Class** type_info = &type_info_ref;
        inline app::SpellMessageIcon__Class* get_class() {
            return il2cpp::get_class<app::SpellMessageIcon__Class>(type_info, "", "SpellMessageIcon");
        }
        inline app::SpellMessageIcon* create() {
            return il2cpp::create_object<app::SpellMessageIcon>(get_class());
        }
    } // namespace SpellMessageIcon
} // namespace app::classes::types
