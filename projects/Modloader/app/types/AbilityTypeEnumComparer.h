#pragma once
#include <Modloader/app/structs/AbilityTypeEnumComparer.h>
#include <Modloader/app/structs/AbilityTypeEnumComparer__Boxed.h>
#include <Modloader/app/structs/AbilityTypeEnumComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AbilityTypeEnumComparer {
        inline app::AbilityTypeEnumComparer__Class** type_info() {
            static app::AbilityTypeEnumComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AbilityTypeEnumComparer__Class**)(modloader::win::memory::resolve_rva(0x04776070));
            }
            return cache;
        }
        inline app::AbilityTypeEnumComparer__Class* get_class() {
            return il2cpp::get_class<app::AbilityTypeEnumComparer__Class>(type_info(), "", "AbilityTypeEnumComparer");
        }
        inline app::AbilityTypeEnumComparer* create() {
            return il2cpp::create_object<app::AbilityTypeEnumComparer>(get_class());
        }
        inline app::AbilityTypeEnumComparer__Boxed* box(app::AbilityTypeEnumComparer value) {
            return il2cpp::box_value<app::AbilityTypeEnumComparer__Boxed>(get_class(), value);
        }
    } // namespace AbilityTypeEnumComparer
} // namespace app::classes::types
