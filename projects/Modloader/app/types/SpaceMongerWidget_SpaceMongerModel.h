#pragma once
#include <Modloader/app/structs/SpaceMongerWidget_SpaceMongerModel.h>
#include <Modloader/app/structs/SpaceMongerWidget_SpaceMongerModel__Boxed.h>
#include <Modloader/app/structs/SpaceMongerWidget_SpaceMongerModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpaceMongerWidget_SpaceMongerModel {
        inline app::SpaceMongerWidget_SpaceMongerModel__Class** type_info() {
            static app::SpaceMongerWidget_SpaceMongerModel__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpaceMongerWidget_SpaceMongerModel__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpaceMongerWidget_SpaceMongerModel__Class* get_class() {
            return il2cpp::get_nested_class<app::SpaceMongerWidget_SpaceMongerModel__Class>(type_info(), "Moon.UberStateVisualization", "SpaceMongerWidget", "SpaceMongerModel");
        }
        inline app::SpaceMongerWidget_SpaceMongerModel* create() {
            return il2cpp::create_object<app::SpaceMongerWidget_SpaceMongerModel>(get_class());
        }
        inline app::SpaceMongerWidget_SpaceMongerModel__Boxed* box(app::SpaceMongerWidget_SpaceMongerModel value) {
            return il2cpp::box_value<app::SpaceMongerWidget_SpaceMongerModel__Boxed>(get_class(), value);
        }
    } // namespace SpaceMongerWidget_SpaceMongerModel
} // namespace app::classes::types
