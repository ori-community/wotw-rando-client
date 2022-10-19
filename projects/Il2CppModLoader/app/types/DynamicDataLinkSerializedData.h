#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DynamicDataLinkSerializedData {
        namespace {
            inline app::DynamicDataLinkSerializedData__Class* type_info_ref = nullptr;
        }
        inline app::DynamicDataLinkSerializedData__Class** type_info = &type_info_ref;
        inline app::DynamicDataLinkSerializedData__Class* get_class() {
            return il2cpp::get_class<app::DynamicDataLinkSerializedData__Class>(type_info, "Moon", "DynamicDataLinkSerializedData");
        }
        inline app::DynamicDataLinkSerializedData* create() {
            return il2cpp::create_object<app::DynamicDataLinkSerializedData>(get_class());
        }
        inline app::DynamicDataLinkSerializedData__Boxed* box(app::DynamicDataLinkSerializedData value) {
            return il2cpp::box_value<app::DynamicDataLinkSerializedData__Boxed>(get_class(), value);
        }
    } // namespace DynamicDataLinkSerializedData
} // namespace app::classes::types
