#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpdateTypeEnumComparer {
        namespace {
            app::UpdateTypeEnumComparer__Class* type_info_ref = nullptr;
        }
        app::UpdateTypeEnumComparer__Class** type_info = &type_info_ref;
        inline app::UpdateTypeEnumComparer__Class* get_class() {
            return il2cpp::get_class<app::UpdateTypeEnumComparer__Class>(type_info, "Moon", "UpdateTypeEnumComparer");
        }
        inline app::UpdateTypeEnumComparer* create() {
            return il2cpp::create_object<app::UpdateTypeEnumComparer>(get_class());
        }
        inline app::UpdateTypeEnumComparer__Boxed* box(app::UpdateTypeEnumComparer value) {
            return il2cpp::box_value<app::UpdateTypeEnumComparer__Boxed>(get_class(), value);
        }
    } // namespace UpdateTypeEnumComparer
} // namespace app::classes::types
