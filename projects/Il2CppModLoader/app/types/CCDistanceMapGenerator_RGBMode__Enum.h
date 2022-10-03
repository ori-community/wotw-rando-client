#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CCDistanceMapGenerator_RGBMode__Enum {
        namespace {
            app::CCDistanceMapGenerator_RGBMode__Enum__Class* type_info_ref = nullptr;
        }
        app::CCDistanceMapGenerator_RGBMode__Enum__Class** type_info = &type_info_ref;
        inline app::CCDistanceMapGenerator_RGBMode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::CCDistanceMapGenerator_RGBMode__Enum__Class>(type_info, "", "CCDistanceMapGenerator", "RGBMode");
        }
        inline app::CCDistanceMapGenerator_RGBMode__Enum* create() {
            return il2cpp::create_object<app::CCDistanceMapGenerator_RGBMode__Enum>(get_class());
        }
    } // namespace CCDistanceMapGenerator_RGBMode__Enum
} // namespace app::classes::types
