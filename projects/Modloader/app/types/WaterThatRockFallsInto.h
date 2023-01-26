#pragma once
#include <Modloader/app/structs/WaterThatRockFallsInto.h>
#include <Modloader/app/structs/WaterThatRockFallsInto__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WaterThatRockFallsInto {
        inline app::WaterThatRockFallsInto__Class** type_info() {
            static app::WaterThatRockFallsInto__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WaterThatRockFallsInto__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WaterThatRockFallsInto__Class* get_class() {
            return il2cpp::get_class<app::WaterThatRockFallsInto__Class>(type_info(), "", "WaterThatRockFallsInto");
        }
        inline app::WaterThatRockFallsInto* create() {
            return il2cpp::create_object<app::WaterThatRockFallsInto>(get_class());
        }
    } // namespace WaterThatRockFallsInto
} // namespace app::classes::types
