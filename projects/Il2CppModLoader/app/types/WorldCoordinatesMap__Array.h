#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldCoordinatesMap__Array {
        namespace {
            app::WorldCoordinatesMap__Array__Class* type_info_ref = nullptr;
        }
        app::WorldCoordinatesMap__Array__Class** type_info = &type_info_ref;
        inline app::WorldCoordinatesMap__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldCoordinatesMap__Array__Class>(type_info, "", "WorldCoordinatesMap[]");
        }
        inline app::WorldCoordinatesMap__Array* create() {
            return il2cpp::create_object<app::WorldCoordinatesMap__Array>(get_class());
        }
    } // namespace WorldCoordinatesMap__Array
} // namespace app::classes::types
