#pragma once
#include <Modloader/app/structs/DynamicDataLinkUtils_InfoStruct.h>
#include <Modloader/app/structs/DynamicDataLinkUtils_InfoStruct__Boxed.h>
#include <Modloader/app/structs/DynamicDataLinkUtils_InfoStruct__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicDataLinkUtils_InfoStruct {
        inline app::DynamicDataLinkUtils_InfoStruct__Class** type_info() {
            static app::DynamicDataLinkUtils_InfoStruct__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicDataLinkUtils_InfoStruct__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicDataLinkUtils_InfoStruct__Class* get_class() {
            return il2cpp::get_nested_class<app::DynamicDataLinkUtils_InfoStruct__Class>(type_info(), "Moon", "DynamicDataLinkUtils", "InfoStruct");
        }
        inline app::DynamicDataLinkUtils_InfoStruct* create() {
            return il2cpp::create_object<app::DynamicDataLinkUtils_InfoStruct>(get_class());
        }
        inline app::DynamicDataLinkUtils_InfoStruct__Boxed* box(app::DynamicDataLinkUtils_InfoStruct value) {
            return il2cpp::box_value<app::DynamicDataLinkUtils_InfoStruct__Boxed>(get_class(), value);
        }
    } // namespace DynamicDataLinkUtils_InfoStruct
} // namespace app::classes::types
