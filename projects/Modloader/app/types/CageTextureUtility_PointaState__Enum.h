#pragma once
#include <Modloader/app/structs/CageTextureUtility_PointaState__Enum.h>
#include <Modloader/app/structs/CageTextureUtility_PointaState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CageTextureUtility_PointaState__Enum {
        inline app::CageTextureUtility_PointaState__Enum__Class** type_info() {
            static app::CageTextureUtility_PointaState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CageTextureUtility_PointaState__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CageTextureUtility_PointaState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CageTextureUtility_PointaState__Enum__Class>(type_info(), "", "CageTextureUtility", "PointaState");
        }
        inline app::CageTextureUtility_PointaState__Enum* create() {
            return il2cpp::create_object<app::CageTextureUtility_PointaState__Enum>(get_class());
        }
    } // namespace CageTextureUtility_PointaState__Enum
} // namespace app::classes::types
