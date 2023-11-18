#pragma once
#include <Modloader/app/structs/RemoveOnBuild.h>
#include <Modloader/app/structs/RemoveOnBuild__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RemoveOnBuild {
        inline app::RemoveOnBuild__Class** type_info() {
            static app::RemoveOnBuild__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RemoveOnBuild__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RemoveOnBuild__Class* get_class() {
            return il2cpp::get_class<app::RemoveOnBuild__Class>(type_info(), "Moon", "RemoveOnBuild");
        }
        inline app::RemoveOnBuild* create() {
            return il2cpp::create_object<app::RemoveOnBuild>(get_class());
        }
    } // namespace RemoveOnBuild
} // namespace app::classes::types
