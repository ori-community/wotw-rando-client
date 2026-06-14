#pragma once
#include <Modloader/app/structs/KeepOnBuild.h>
#include <Modloader/app/structs/KeepOnBuild__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeepOnBuild {
        inline app::KeepOnBuild__Class** type_info() {
            static app::KeepOnBuild__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KeepOnBuild__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KeepOnBuild__Class* get_class() {
            return il2cpp::get_class<app::KeepOnBuild__Class>(type_info(), "Moon", "KeepOnBuild");
        }
        inline app::KeepOnBuild* create() {
            return il2cpp::create_object<app::KeepOnBuild>(get_class());
        }
    } // namespace KeepOnBuild
} // namespace app::classes::types
