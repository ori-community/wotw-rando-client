#pragma once
#include <Modloader/app/structs/ModifierDataModel.h>
#include <Modloader/app/structs/ModifierDataModel__Array.h>
#include <Modloader/app/structs/ModifierDataModel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ModifierDataModel {
        inline app::ModifierDataModel__Class** type_info() {
            static app::ModifierDataModel__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ModifierDataModel__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ModifierDataModel__Class* get_class() {
            return il2cpp::get_class<app::ModifierDataModel__Class>(type_info(), "Moon.ArtOptimization", "ModifierDataModel");
        }
        inline app::ModifierDataModel* create() {
            return il2cpp::create_object<app::ModifierDataModel>(get_class());
        }
        inline app::ModifierDataModel__Array* create_array(int size) {
            return il2cpp::array_new<app::ModifierDataModel__Array>(get_class(), size);
        }
        inline app::ModifierDataModel__Array* create_array(const std::vector<app::ModifierDataModel*>& items) {
            return il2cpp::array_new<app::ModifierDataModel__Array>(get_class(), items);
        }
    } // namespace ModifierDataModel
} // namespace app::classes::types
