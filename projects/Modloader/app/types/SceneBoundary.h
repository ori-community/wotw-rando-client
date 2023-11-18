#pragma once
#include <Modloader/app/structs/SceneBoundary.h>
#include <Modloader/app/structs/SceneBoundary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SceneBoundary {
        inline app::SceneBoundary__Class** type_info() {
            static app::SceneBoundary__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SceneBoundary__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SceneBoundary__Class* get_class() {
            return il2cpp::get_class<app::SceneBoundary__Class>(type_info(), "", "SceneBoundary");
        }
        inline app::SceneBoundary* create() {
            return il2cpp::create_object<app::SceneBoundary>(get_class());
        }
    } // namespace SceneBoundary
} // namespace app::classes::types
