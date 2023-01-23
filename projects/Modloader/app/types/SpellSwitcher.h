#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpellSwitcher__Class.h>
#include <Modloader/app/structs/SpellSwitcher.h>

namespace app::classes::types {
    namespace SpellSwitcher {
        namespace {
            inline app::SpellSwitcher__Class* type_info_ref = nullptr;
        }
        inline app::SpellSwitcher__Class** type_info = &type_info_ref;
        inline app::SpellSwitcher__Class* get_class() {
            return il2cpp::get_class<app::SpellSwitcher__Class>(type_info, "", "SpellSwitcher");
        }
        inline app::SpellSwitcher* create() {
            return il2cpp::create_object<app::SpellSwitcher>(get_class());
        }
    } // namespace SpellSwitcher
} // namespace app::classes::types
