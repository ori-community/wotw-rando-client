#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DynamicDataLinkUtils_DataTargetMemberType__Enum {
        namespace {
            app::DynamicDataLinkUtils_DataTargetMemberType__Enum__Class* type_info_ref = nullptr;
        }
        app::DynamicDataLinkUtils_DataTargetMemberType__Enum__Class** type_info = &type_info_ref;
        inline app::DynamicDataLinkUtils_DataTargetMemberType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicDataLinkUtils_DataTargetMemberType__Enum__Class>(type_info, "Moon", "DynamicDataLinkUtils", "DataTargetMemberType");
        }
        inline app::DynamicDataLinkUtils_DataTargetMemberType__Enum* create() {
            return il2cpp::create_object<app::DynamicDataLinkUtils_DataTargetMemberType__Enum>(get_class());
        }
    } // namespace DynamicDataLinkUtils_DataTargetMemberType__Enum
} // namespace app::classes::types
