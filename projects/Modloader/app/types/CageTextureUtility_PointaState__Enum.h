#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CageTextureUtility_PointaState__Enum {
        namespace {
            inline app::CageTextureUtility_PointaState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::CageTextureUtility_PointaState__Enum__Class** type_info = &type_info_ref;
        inline app::CageTextureUtility_PointaState__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CageTextureUtility_PointaState__Enum__Class>(type_info, "", "CageTextureUtility", "PointaState");
        }
        inline app::CageTextureUtility_PointaState__Enum* create() {
            return il2cpp::create_object<app::CageTextureUtility_PointaState__Enum>(get_class());
        }
    } // namespace CageTextureUtility_PointaState__Enum
} // namespace app::classes::types
