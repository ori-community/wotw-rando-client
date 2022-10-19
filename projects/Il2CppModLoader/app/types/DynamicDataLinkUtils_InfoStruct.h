#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicDataLinkUtils_InfoStruct {
        namespace {
            inline app::DynamicDataLinkUtils_InfoStruct__Class* type_info_ref = nullptr;
        }
        inline app::DynamicDataLinkUtils_InfoStruct__Class** type_info = &type_info_ref;
        inline app::DynamicDataLinkUtils_InfoStruct__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicDataLinkUtils_InfoStruct__Class>(type_info, "Moon", "DynamicDataLinkUtils", "InfoStruct");
        }
        inline app::DynamicDataLinkUtils_InfoStruct* create() {
            return il2cpp::create_object<app::DynamicDataLinkUtils_InfoStruct>(get_class());
        }
        inline app::DynamicDataLinkUtils_InfoStruct__Boxed* box(app::DynamicDataLinkUtils_InfoStruct value) {
            return il2cpp::box_value<app::DynamicDataLinkUtils_InfoStruct__Boxed>(get_class(), value);
        }
    } // namespace DynamicDataLinkUtils_InfoStruct
} // namespace app::classes::types
