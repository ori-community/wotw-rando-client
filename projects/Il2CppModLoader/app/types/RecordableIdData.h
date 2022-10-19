#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RecordableIdData {
        namespace {
            inline app::RecordableIdData__Class* type_info_ref = nullptr;
        }
        inline app::RecordableIdData__Class** type_info = &type_info_ref;
        inline app::RecordableIdData__Class* get_class() {
            return il2cpp::get_class<app::RecordableIdData__Class>(type_info, "", "RecordableIdData");
        }
        inline app::RecordableIdData* create() {
            return il2cpp::create_object<app::RecordableIdData>(get_class());
        }
        inline app::RecordableIdData__Boxed* box(app::RecordableIdData value) {
            return il2cpp::box_value<app::RecordableIdData__Boxed>(get_class(), value);
        }
    } // namespace RecordableIdData
} // namespace app::classes::types
