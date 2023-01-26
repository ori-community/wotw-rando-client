#pragma once
#include <Modloader/app/structs/RecordableIdData.h>
#include <Modloader/app/structs/RecordableIdData__Boxed.h>
#include <Modloader/app/structs/RecordableIdData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecordableIdData {
        inline app::RecordableIdData__Class** type_info() {
            static app::RecordableIdData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecordableIdData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecordableIdData__Class* get_class() {
            return il2cpp::get_class<app::RecordableIdData__Class>(type_info(), "", "RecordableIdData");
        }
        inline app::RecordableIdData* create() {
            return il2cpp::create_object<app::RecordableIdData>(get_class());
        }
        inline app::RecordableIdData__Boxed* box(app::RecordableIdData value) {
            return il2cpp::box_value<app::RecordableIdData__Boxed>(get_class(), value);
        }
    } // namespace RecordableIdData
} // namespace app::classes::types
