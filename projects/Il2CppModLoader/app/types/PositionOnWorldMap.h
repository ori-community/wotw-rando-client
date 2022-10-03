#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PositionOnWorldMap {
        namespace {
            app::PositionOnWorldMap__Class* type_info_ref = nullptr;
        }
        app::PositionOnWorldMap__Class** type_info = &type_info_ref;
        inline app::PositionOnWorldMap__Class* get_class() {
            return il2cpp::get_class<app::PositionOnWorldMap__Class>(type_info, "", "PositionOnWorldMap");
        }
        inline app::PositionOnWorldMap* create() {
            return il2cpp::create_object<app::PositionOnWorldMap>(get_class());
        }
    } // namespace PositionOnWorldMap
} // namespace app::classes::types
