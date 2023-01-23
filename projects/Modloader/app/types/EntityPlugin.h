#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityPlugin__Class.h>
#include <Modloader/app/structs/EntityPlugin.h>

namespace app::classes::types {
    namespace EntityPlugin {
        namespace {
            inline app::EntityPlugin__Class* type_info_ref = nullptr;
        }
        inline app::EntityPlugin__Class** type_info = &type_info_ref;
        inline app::EntityPlugin__Class* get_class() {
            return il2cpp::get_class<app::EntityPlugin__Class>(type_info, "", "EntityPlugin");
        }
        inline app::EntityPlugin* create() {
            return il2cpp::create_object<app::EntityPlugin>(get_class());
        }
    } // namespace EntityPlugin
} // namespace app::classes::types
