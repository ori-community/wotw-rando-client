#pragma once
#include <Modloader/app/structs/ScenePaddingBoundary.h>
#include <Modloader/app/structs/ScenePaddingBoundary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScenePaddingBoundary {
        inline app::ScenePaddingBoundary__Class** type_info() {
            static app::ScenePaddingBoundary__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScenePaddingBoundary__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScenePaddingBoundary__Class* get_class() {
            return il2cpp::get_class<app::ScenePaddingBoundary__Class>(type_info(), "", "ScenePaddingBoundary");
        }
        inline app::ScenePaddingBoundary* create() {
            return il2cpp::create_object<app::ScenePaddingBoundary>(get_class());
        }
    } // namespace ScenePaddingBoundary
} // namespace app::classes::types
