#pragma once
#include <Modloader/app/structs/DynamicDataLinkUtils_DataTargetMemberType__Enum.h>
#include <Modloader/app/structs/DynamicDataLinkUtils_DataTargetMemberType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicDataLinkUtils_DataTargetMemberType__Enum {
        inline app::DynamicDataLinkUtils_DataTargetMemberType__Enum__Class** type_info() {
            static app::DynamicDataLinkUtils_DataTargetMemberType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicDataLinkUtils_DataTargetMemberType__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicDataLinkUtils_DataTargetMemberType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicDataLinkUtils_DataTargetMemberType__Enum__Class>(type_info(), "Moon", "DynamicDataLinkUtils", "DataTargetMemberType");
        }
        inline app::DynamicDataLinkUtils_DataTargetMemberType__Enum* create() {
            return il2cpp::create_object<app::DynamicDataLinkUtils_DataTargetMemberType__Enum>(get_class());
        }
    } // namespace DynamicDataLinkUtils_DataTargetMemberType__Enum
} // namespace app::classes::types
