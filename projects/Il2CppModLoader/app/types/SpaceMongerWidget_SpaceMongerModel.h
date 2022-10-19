#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SpaceMongerWidget_SpaceMongerModel {
        namespace {
            inline app::SpaceMongerWidget_SpaceMongerModel__Class* type_info_ref = nullptr;
        }
        inline app::SpaceMongerWidget_SpaceMongerModel__Class** type_info = &type_info_ref;
        inline app::SpaceMongerWidget_SpaceMongerModel__Class* get_class() {
            return il2cpp::get_nested_class<app::SpaceMongerWidget_SpaceMongerModel__Class>(type_info, "Moon.UberStateVisualization", "SpaceMongerWidget", "SpaceMongerModel");
        }
        inline app::SpaceMongerWidget_SpaceMongerModel* create() {
            return il2cpp::create_object<app::SpaceMongerWidget_SpaceMongerModel>(get_class());
        }
        inline app::SpaceMongerWidget_SpaceMongerModel__Boxed* box(app::SpaceMongerWidget_SpaceMongerModel value) {
            return il2cpp::box_value<app::SpaceMongerWidget_SpaceMongerModel__Boxed>(get_class(), value);
        }
    } // namespace SpaceMongerWidget_SpaceMongerModel
} // namespace app::classes::types
