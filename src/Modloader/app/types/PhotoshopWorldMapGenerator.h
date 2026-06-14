#pragma once
#include <Modloader/app/structs/PhotoshopWorldMapGenerator.h>
#include <Modloader/app/structs/PhotoshopWorldMapGenerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PhotoshopWorldMapGenerator {
        inline app::PhotoshopWorldMapGenerator__Class** type_info() {
            static app::PhotoshopWorldMapGenerator__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PhotoshopWorldMapGenerator__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PhotoshopWorldMapGenerator__Class* get_class() {
            return il2cpp::get_class<app::PhotoshopWorldMapGenerator__Class>(type_info(), "", "PhotoshopWorldMapGenerator");
        }
        inline app::PhotoshopWorldMapGenerator* create() {
            return il2cpp::create_object<app::PhotoshopWorldMapGenerator>(get_class());
        }
    } // namespace PhotoshopWorldMapGenerator
} // namespace app::classes::types
