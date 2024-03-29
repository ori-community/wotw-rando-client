#pragma once
#include <Modloader/app/structs/UpdateTypeEnumComparer.h>
#include <Modloader/app/structs/UpdateTypeEnumComparer__Boxed.h>
#include <Modloader/app/structs/UpdateTypeEnumComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UpdateTypeEnumComparer {
        inline app::UpdateTypeEnumComparer__Class** type_info() {
            static app::UpdateTypeEnumComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UpdateTypeEnumComparer__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UpdateTypeEnumComparer__Class* get_class() {
            return il2cpp::get_class<app::UpdateTypeEnumComparer__Class>(type_info(), "Moon", "UpdateTypeEnumComparer");
        }
        inline app::UpdateTypeEnumComparer* create() {
            return il2cpp::create_object<app::UpdateTypeEnumComparer>(get_class());
        }
        inline app::UpdateTypeEnumComparer__Boxed* box(app::UpdateTypeEnumComparer value) {
            return il2cpp::box_value<app::UpdateTypeEnumComparer__Boxed>(get_class(), value);
        }
    } // namespace UpdateTypeEnumComparer
} // namespace app::classes::types
