#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NpcProject__Class.h>
#include <Modloader/app/structs/NpcProject.h>

namespace app::classes::types {
    namespace NpcProject {
        namespace {
            inline app::NpcProject__Class* type_info_ref = nullptr;
        }
        inline app::NpcProject__Class** type_info = &type_info_ref;
        inline app::NpcProject__Class* get_class() {
            return il2cpp::get_class<app::NpcProject__Class>(type_info, "", "NpcProject");
        }
        inline app::NpcProject* create() {
            return il2cpp::create_object<app::NpcProject>(get_class());
        }
    } // namespace NpcProject
} // namespace app::classes::types
