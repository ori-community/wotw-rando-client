#pragma once
#include <Modloader/app/structs/WaterPoisonCloud_Blob__Array.h>
#include <Modloader/app/structs/WaterPoisonCloud_Blob__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterPoisonCloud_Blob__Array {
        inline app::WaterPoisonCloud_Blob__Array__Class** type_info() {
            static app::WaterPoisonCloud_Blob__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterPoisonCloud_Blob__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterPoisonCloud_Blob__Array__Class* get_class() {
            return il2cpp::get_class<app::WaterPoisonCloud_Blob__Array__Class>(type_info(), "", "WaterPoisonCloud+Blob[]");
        }
        inline app::WaterPoisonCloud_Blob__Array* create() {
            return il2cpp::create_object<app::WaterPoisonCloud_Blob__Array>(get_class());
        }
    } // namespace WaterPoisonCloud_Blob__Array
} // namespace app::classes::types
