#pragma once
#include <Modloader/app/structs/CCDistanceMapGenerator_Pixel__Array.h>
#include <Modloader/app/structs/CCDistanceMapGenerator_Pixel__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCDistanceMapGenerator_Pixel__Array {
        inline app::CCDistanceMapGenerator_Pixel__Array__Class** type_info() {
            static app::CCDistanceMapGenerator_Pixel__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CCDistanceMapGenerator_Pixel__Array__Class**)(modloader::win::memory::resolve_rva(0x0477BD60));
            }
            return cache;
        }
        inline app::CCDistanceMapGenerator_Pixel__Array__Class* get_class() {
            return il2cpp::get_class<app::CCDistanceMapGenerator_Pixel__Array__Class>(type_info(), "", "CCDistanceMapGenerator+Pixel[,]");
        }
        inline app::CCDistanceMapGenerator_Pixel__Array* create() {
            return il2cpp::create_object<app::CCDistanceMapGenerator_Pixel__Array>(get_class());
        }
    } // namespace CCDistanceMapGenerator_Pixel__Array
} // namespace app::classes::types
