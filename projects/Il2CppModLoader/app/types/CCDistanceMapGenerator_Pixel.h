#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CCDistanceMapGenerator_Pixel {
        inline app::CCDistanceMapGenerator_Pixel__Class** type_info = (app::CCDistanceMapGenerator_Pixel__Class**)(modloader::win::memory::resolve_rva(0x047062D8));
        inline app::CCDistanceMapGenerator_Pixel__Class* get_class() {
            return il2cpp::get_nested_class<app::CCDistanceMapGenerator_Pixel__Class>(type_info, "", "CCDistanceMapGenerator", "Pixel");
        }
        inline app::CCDistanceMapGenerator_Pixel* create() {
            return il2cpp::create_object<app::CCDistanceMapGenerator_Pixel>(get_class());
        }
    } // namespace CCDistanceMapGenerator_Pixel
} // namespace app::classes::types
