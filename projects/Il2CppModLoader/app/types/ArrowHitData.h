#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArrowHitData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArrowHitData__Class** type_info;
        inline app::ArrowHitData__Class* get_class() {
            return il2cpp::get_class<app::ArrowHitData__Class>(type_info, "", "ArrowHitData");
        }
        inline app::ArrowHitData* create() {
            return il2cpp::create_object<app::ArrowHitData>(get_class());
        }
        inline app::ArrowHitData__Boxed* box(app::ArrowHitData value) {
            return il2cpp::box_value<app::ArrowHitData__Boxed>(get_class(), value);
        }
    } // namespace ArrowHitData
} // namespace app::classes::types
