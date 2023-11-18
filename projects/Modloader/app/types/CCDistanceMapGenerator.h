#pragma once
#include <Modloader/app/structs/CCDistanceMapGenerator.h>
#include <Modloader/app/structs/CCDistanceMapGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CCDistanceMapGenerator {
        inline app::CCDistanceMapGenerator__Class** type_info() {
            static app::CCDistanceMapGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CCDistanceMapGenerator__Class**)(modloader::win::memory::resolve_rva(0x0477FD38));
            }
            return cache;
        }
        inline app::CCDistanceMapGenerator__Class* get_class() {
            return il2cpp::get_class<app::CCDistanceMapGenerator__Class>(type_info(), "", "CCDistanceMapGenerator");
        }
        inline app::CCDistanceMapGenerator* create() {
            return il2cpp::create_object<app::CCDistanceMapGenerator>(get_class());
        }
    } // namespace CCDistanceMapGenerator
} // namespace app::classes::types
