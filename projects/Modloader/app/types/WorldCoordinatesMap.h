#pragma once
#include <Modloader/app/structs/WorldCoordinatesMap.h>
#include <Modloader/app/structs/WorldCoordinatesMap__Array.h>
#include <Modloader/app/structs/WorldCoordinatesMap__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldCoordinatesMap {
        inline app::WorldCoordinatesMap__Class** type_info() {
            static app::WorldCoordinatesMap__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldCoordinatesMap__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldCoordinatesMap__Class* get_class() {
            return il2cpp::get_class<app::WorldCoordinatesMap__Class>(type_info(), "", "WorldCoordinatesMap");
        }
        inline app::WorldCoordinatesMap* create() {
            return il2cpp::create_object<app::WorldCoordinatesMap>(get_class());
        }
        inline app::WorldCoordinatesMap__Array* create_array(int size) {
            return il2cpp::array_new<app::WorldCoordinatesMap__Array>(get_class(), size);
        }
        inline app::WorldCoordinatesMap__Array* create_array(const std::vector<app::WorldCoordinatesMap*>& items) {
            return il2cpp::array_new<app::WorldCoordinatesMap__Array>(get_class(), items);
        }
    } // namespace WorldCoordinatesMap
} // namespace app::classes::types
