#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BipedNaming_BoneType__Enum__Class.h>
#include <Modloader/app/structs/BipedNaming_BoneType__Enum.h>

namespace app::classes::types {
    namespace BipedNaming_BoneType__Enum {
        namespace {
            inline app::BipedNaming_BoneType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BipedNaming_BoneType__Enum__Class** type_info = &type_info_ref;
        inline app::BipedNaming_BoneType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::BipedNaming_BoneType__Enum__Class>(type_info, "RootMotion", "BipedNaming", "BoneType");
        }
        inline app::BipedNaming_BoneType__Enum* create() {
            return il2cpp::create_object<app::BipedNaming_BoneType__Enum>(get_class());
        }
    } // namespace BipedNaming_BoneType__Enum
} // namespace app::classes::types
