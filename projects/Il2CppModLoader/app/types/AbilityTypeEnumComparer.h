#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AbilityTypeEnumComparer {
        inline app::AbilityTypeEnumComparer__Class** type_info = (app::AbilityTypeEnumComparer__Class**)(modloader::win::memory::resolve_rva(0x04776070));
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
