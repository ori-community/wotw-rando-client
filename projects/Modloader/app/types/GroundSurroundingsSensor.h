#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GroundSurroundingsSensor__Class.h>
#include <Modloader/app/structs/GroundSurroundingsSensor.h>
#include <Modloader/app/structs/GroundSurroundingsSensor__Boxed.h>

namespace app::classes::types {
    namespace GroundSurroundingsSensor {
        namespace {
            inline app::GroundSurroundingsSensor__Class* type_info_ref = nullptr;
        }
        inline app::GroundSurroundingsSensor__Class** type_info = &type_info_ref;
        inline app::GroundSurroundingsSensor__Class* get_class() {
            return il2cpp::get_class<app::GroundSurroundingsSensor__Class>(type_info, "Moon", "GroundSurroundingsSensor");
        }
        inline app::GroundSurroundingsSensor* create() {
            return il2cpp::create_object<app::GroundSurroundingsSensor>(get_class());
        }
        inline app::GroundSurroundingsSensor__Boxed* box(app::GroundSurroundingsSensor value) {
            return il2cpp::box_value<app::GroundSurroundingsSensor__Boxed>(get_class(), value);
        }
    } // namespace GroundSurroundingsSensor
} // namespace app::classes::types
