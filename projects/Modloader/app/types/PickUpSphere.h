#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PickUpSphere__Class.h>
#include <Modloader/app/structs/PickUpSphere.h>

namespace app::classes::types {
    namespace PickUpSphere {
        namespace {
            inline app::PickUpSphere__Class* type_info_ref = nullptr;
        }
        inline app::PickUpSphere__Class** type_info = &type_info_ref;
        inline app::PickUpSphere__Class* get_class() {
            return il2cpp::get_class<app::PickUpSphere__Class>(type_info, "RootMotion.Demos", "PickUpSphere");
        }
        inline app::PickUpSphere* create() {
            return il2cpp::create_object<app::PickUpSphere>(get_class());
        }
    } // namespace PickUpSphere
} // namespace app::classes::types
