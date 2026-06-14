#pragma once
#include <Modloader/app/structs/NpcProject.h>
#include <Modloader/app/structs/NpcProject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NpcProject {
        inline app::NpcProject__Class** type_info() {
            static app::NpcProject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NpcProject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NpcProject__Class* get_class() {
            return il2cpp::get_class<app::NpcProject__Class>(type_info(), "", "NpcProject");
        }
        inline app::NpcProject* create() {
            return il2cpp::create_object<app::NpcProject>(get_class());
        }
    } // namespace NpcProject
} // namespace app::classes::types
