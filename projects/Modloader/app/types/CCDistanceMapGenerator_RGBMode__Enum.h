#pragma once
#include <Modloader/app/structs/CCDistanceMapGenerator_RGBMode__Enum.h>
#include <Modloader/app/structs/CCDistanceMapGenerator_RGBMode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCDistanceMapGenerator_RGBMode__Enum {
        inline app::CCDistanceMapGenerator_RGBMode__Enum__Class** type_info() {
            static app::CCDistanceMapGenerator_RGBMode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CCDistanceMapGenerator_RGBMode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CCDistanceMapGenerator_RGBMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CCDistanceMapGenerator_RGBMode__Enum__Class>(type_info(), "", "CCDistanceMapGenerator", "RGBMode");
        }
        inline app::CCDistanceMapGenerator_RGBMode__Enum* create() {
            return il2cpp::create_object<app::CCDistanceMapGenerator_RGBMode__Enum>(get_class());
        }
    } // namespace CCDistanceMapGenerator_RGBMode__Enum
} // namespace app::classes::types
