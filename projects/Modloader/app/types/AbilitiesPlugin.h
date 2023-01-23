#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AbilitiesPlugin__Class.h>
#include <Modloader/app/structs/AbilitiesPlugin.h>

namespace app::classes::types {
    namespace AbilitiesPlugin {
        namespace {
            inline app::AbilitiesPlugin__Class* type_info_ref = nullptr;
        }
        inline app::AbilitiesPlugin__Class** type_info = &type_info_ref;
        inline app::AbilitiesPlugin__Class* get_class() {
            return il2cpp::get_class<app::AbilitiesPlugin__Class>(type_info, "", "AbilitiesPlugin");
        }
        inline app::AbilitiesPlugin* create() {
            return il2cpp::create_object<app::AbilitiesPlugin>(get_class());
        }
    } // namespace AbilitiesPlugin
} // namespace app::classes::types
