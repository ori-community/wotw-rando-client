#pragma once
#include <Modloader/app/structs/DistortionCoordinates_t.h>
#include <Modloader/app/structs/DistortionCoordinates_t__Boxed.h>
#include <Modloader/app/structs/DistortionCoordinates_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DistortionCoordinates_t {
        inline app::DistortionCoordinates_t__Class** type_info() {
            static app::DistortionCoordinates_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DistortionCoordinates_t__Class**)(modloader::win::memory::resolve_rva(0x04725AD8));
            }
            return cache;
        }
        inline app::DistortionCoordinates_t__Class* get_class() {
            return il2cpp::get_class<app::DistortionCoordinates_t__Class>(type_info(), "ZenFulcrum.VR.OpenVRBinding", "DistortionCoordinates_t");
        }
        inline app::DistortionCoordinates_t* create() {
            return il2cpp::create_object<app::DistortionCoordinates_t>(get_class());
        }
        inline app::DistortionCoordinates_t__Boxed* box(app::DistortionCoordinates_t value) {
            return il2cpp::box_value<app::DistortionCoordinates_t__Boxed>(get_class(), value);
        }
    } // namespace DistortionCoordinates_t
} // namespace app::classes::types
