#pragma once
#include <Modloader/app/structs/StaggerBehaviour.h>
#include <Modloader/app/structs/StaggerBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StaggerBehaviour {
        inline app::StaggerBehaviour__Class** type_info() {
            static app::StaggerBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::StaggerBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::StaggerBehaviour__Class* get_class() {
            return il2cpp::get_class<app::StaggerBehaviour__Class>(type_info(), "", "StaggerBehaviour");
        }
        inline app::StaggerBehaviour* create() {
            return il2cpp::create_object<app::StaggerBehaviour>(get_class());
        }
    } // namespace StaggerBehaviour
} // namespace app::classes::types
