#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldCoordinatesMap {
        namespace {
            app::WorldCoordinatesMap__Class* type_info_ref = nullptr;
        }
        app::WorldCoordinatesMap__Class** type_info = &type_info_ref;
        inline app::WorldCoordinatesMap__Class* get_class() {
            return il2cpp::get_class<app::WorldCoordinatesMap__Class>(type_info, "", "WorldCoordinatesMap");
        }
        inline app::WorldCoordinatesMap* create() {
            return il2cpp::create_object<app::WorldCoordinatesMap>(get_class());
        }
        inline app::WorldCoordinatesMap__Array* create_array(int size) {
            return il2cpp::array_new<app::WorldCoordinatesMap__Array>(get_class(), size);
        }
    } // namespace WorldCoordinatesMap
} // namespace app::classes::types
