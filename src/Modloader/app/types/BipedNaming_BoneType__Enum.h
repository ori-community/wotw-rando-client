#pragma once
#include <Modloader/app/structs/BipedNaming_BoneType__Enum.h>
#include <Modloader/app/structs/BipedNaming_BoneType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BipedNaming_BoneType__Enum {
        inline app::BipedNaming_BoneType__Enum__Class** type_info() {
            static app::BipedNaming_BoneType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BipedNaming_BoneType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BipedNaming_BoneType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BipedNaming_BoneType__Enum__Class>(type_info(), "RootMotion", "BipedNaming", "BoneType");
        }
        inline app::BipedNaming_BoneType__Enum* create() {
            return il2cpp::create_object<app::BipedNaming_BoneType__Enum>(get_class());
        }
    } // namespace BipedNaming_BoneType__Enum
} // namespace app::classes::types
