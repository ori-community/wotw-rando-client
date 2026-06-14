#pragma once
#include <Modloader/app/structs/MeshTrail_MeshTrailTurbulence.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailTurbulence__Array.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailTurbulence__Boxed.h>
#include <Modloader/app/structs/MeshTrail_MeshTrailTurbulence__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MeshTrail_MeshTrailTurbulence {
        inline app::MeshTrail_MeshTrailTurbulence__Class** type_info() {
            static app::MeshTrail_MeshTrailTurbulence__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MeshTrail_MeshTrailTurbulence__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MeshTrail_MeshTrailTurbulence__Class* get_class() {
            return il2cpp::get_nested_class<app::MeshTrail_MeshTrailTurbulence__Class>(type_info(), "", "MeshTrail", "MeshTrailTurbulence");
        }
        inline app::MeshTrail_MeshTrailTurbulence* create() {
            return il2cpp::create_object<app::MeshTrail_MeshTrailTurbulence>(get_class());
        }
        inline app::MeshTrail_MeshTrailTurbulence__Boxed* box(app::MeshTrail_MeshTrailTurbulence value) {
            return il2cpp::box_value<app::MeshTrail_MeshTrailTurbulence__Boxed>(get_class(), value);
        }
        inline app::MeshTrail_MeshTrailTurbulence__Array* create_array(int size) {
            return il2cpp::array_new<app::MeshTrail_MeshTrailTurbulence__Array>(get_class(), size);
        }
        inline app::MeshTrail_MeshTrailTurbulence__Array* create_array(const std::vector<app::MeshTrail_MeshTrailTurbulence>& items) {
            return il2cpp::array_new<app::MeshTrail_MeshTrailTurbulence__Array>(get_class(), items);
        }
    } // namespace MeshTrail_MeshTrailTurbulence
} // namespace app::classes::types
