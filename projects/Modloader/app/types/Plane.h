#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Plane__Class.h>
#include <Modloader/app/structs/Plane.h>
#include <Modloader/app/structs/Plane__Boxed.h>
#include <Modloader/app/structs/Plane__Array.h>

namespace app::classes::types {
    namespace Plane {
        namespace {
            inline app::Plane__Class* type_info_ref = nullptr;
        }
        inline app::Plane__Class** type_info = &type_info_ref;
        inline app::Plane__Class* get_class() {
            return il2cpp::get_class<app::Plane__Class>(type_info, "UnityEngine", "Plane");
        }
        inline app::Plane* create() {
            return il2cpp::create_object<app::Plane>(get_class());
        }
        inline app::Plane__Boxed* box(app::Plane value) {
            return il2cpp::box_value<app::Plane__Boxed>(get_class(), value);
        }
        inline app::Plane__Array* create_array(int size) {
            return il2cpp::array_new<app::Plane__Array>(get_class(), size);
        }
        inline app::Plane__Array* create_array(const std::vector<app::Plane>& items) {
            return il2cpp::array_new<app::Plane__Array>(get_class(), items);
        }
    } // namespace Plane
} // namespace app::classes::types
