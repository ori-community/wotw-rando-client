#pragma once
#include <Modloader/app/structs/ArtBuildController.h>
#include <Modloader/app/structs/ArtBuildController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArtBuildController {
        inline app::ArtBuildController__Class** type_info() {
            static app::ArtBuildController__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ArtBuildController__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ArtBuildController__Class* get_class() {
            return il2cpp::get_class<app::ArtBuildController__Class>(type_info(), "", "ArtBuildController");
        }
        inline app::ArtBuildController* create() {
            return il2cpp::create_object<app::ArtBuildController>(get_class());
        }
    } // namespace ArtBuildController
} // namespace app::classes::types
