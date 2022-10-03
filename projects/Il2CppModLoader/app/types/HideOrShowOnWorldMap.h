#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HideOrShowOnWorldMap {
        namespace {
            app::HideOrShowOnWorldMap__Class* type_info_ref = nullptr;
        }
        app::HideOrShowOnWorldMap__Class** type_info = &type_info_ref;
        inline app::HideOrShowOnWorldMap__Class* get_class() {
            return il2cpp::get_class<app::HideOrShowOnWorldMap__Class>(type_info, "", "HideOrShowOnWorldMap");
        }
        inline app::HideOrShowOnWorldMap* create() {
            return il2cpp::create_object<app::HideOrShowOnWorldMap>(get_class());
        }
    } // namespace HideOrShowOnWorldMap
} // namespace app::classes::types
