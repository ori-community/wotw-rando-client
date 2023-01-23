#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WorldCoordinatesMap__Array__Class.h>
#include <Modloader/app/structs/WorldCoordinatesMap__Array.h>

namespace app::classes::types {
    namespace WorldCoordinatesMap__Array {
        namespace {
            inline app::WorldCoordinatesMap__Array__Class* type_info_ref = nullptr;
        }
        inline app::WorldCoordinatesMap__Array__Class** type_info = &type_info_ref;
        inline app::WorldCoordinatesMap__Array__Class* get_class() {
            return il2cpp::get_class<app::WorldCoordinatesMap__Array__Class>(type_info, "", "WorldCoordinatesMap[]");
        }
        inline app::WorldCoordinatesMap__Array* create() {
            return il2cpp::create_object<app::WorldCoordinatesMap__Array>(get_class());
        }
    } // namespace WorldCoordinatesMap__Array
} // namespace app::classes::types
