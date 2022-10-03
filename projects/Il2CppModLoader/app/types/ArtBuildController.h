#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtBuildController {
        namespace {
            app::ArtBuildController__Class* type_info_ref = nullptr;
        }
        app::ArtBuildController__Class** type_info = &type_info_ref;
        inline app::ArtBuildController__Class* get_class() {
            return il2cpp::get_class<app::ArtBuildController__Class>(type_info, "", "ArtBuildController");
        }
        inline app::ArtBuildController* create() {
            return il2cpp::create_object<app::ArtBuildController>(get_class());
        }
    } // namespace ArtBuildController
} // namespace app::classes::types
