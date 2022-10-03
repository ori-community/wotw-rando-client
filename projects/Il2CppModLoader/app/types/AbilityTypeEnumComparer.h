#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AbilityTypeEnumComparer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AbilityTypeEnumComparer__Class** type_info;
        inline app::AbilityTypeEnumComparer__Class* get_class() {
            return il2cpp::get_class<app::AbilityTypeEnumComparer__Class>(type_info, "", "AbilityTypeEnumComparer");
        }
        inline app::AbilityTypeEnumComparer* create() {
            return il2cpp::create_object<app::AbilityTypeEnumComparer>(get_class());
        }
        inline app::AbilityTypeEnumComparer__Boxed* box(app::AbilityTypeEnumComparer value) {
            return il2cpp::box_value<app::AbilityTypeEnumComparer__Boxed>(get_class(), value);
        }
    } // namespace AbilityTypeEnumComparer
} // namespace app::classes::types
