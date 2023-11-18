#pragma once
#include <Modloader/app/structs/SceneRootRecruiter.h>
#include <Modloader/app/structs/SceneRootRecruiter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneRootRecruiter {
        inline app::SceneRootRecruiter__Class** type_info() {
            static app::SceneRootRecruiter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneRootRecruiter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneRootRecruiter__Class* get_class() {
            return il2cpp::get_class<app::SceneRootRecruiter__Class>(type_info(), "", "SceneRootRecruiter");
        }
        inline app::SceneRootRecruiter* create() {
            return il2cpp::create_object<app::SceneRootRecruiter>(get_class());
        }
    } // namespace SceneRootRecruiter
} // namespace app::classes::types
