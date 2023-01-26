#pragma once
#include <Modloader/app/structs/DynamicDataLinkSerializedData.h>
#include <Modloader/app/structs/DynamicDataLinkSerializedData__Boxed.h>
#include <Modloader/app/structs/DynamicDataLinkSerializedData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DynamicDataLinkSerializedData {
        inline app::DynamicDataLinkSerializedData__Class** type_info() {
            static app::DynamicDataLinkSerializedData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DynamicDataLinkSerializedData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DynamicDataLinkSerializedData__Class* get_class() {
            return il2cpp::get_class<app::DynamicDataLinkSerializedData__Class>(type_info(), "Moon", "DynamicDataLinkSerializedData");
        }
        inline app::DynamicDataLinkSerializedData* create() {
            return il2cpp::create_object<app::DynamicDataLinkSerializedData>(get_class());
        }
        inline app::DynamicDataLinkSerializedData__Boxed* box(app::DynamicDataLinkSerializedData value) {
            return il2cpp::box_value<app::DynamicDataLinkSerializedData__Boxed>(get_class(), value);
        }
    } // namespace DynamicDataLinkSerializedData
} // namespace app::classes::types
