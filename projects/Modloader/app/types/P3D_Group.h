#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/P3D_Group__Class.h>
#include <Modloader/app/structs/P3D_Group.h>
#include <Modloader/app/structs/P3D_Group__Boxed.h>

namespace app::classes::types {
    namespace P3D_Group {
        namespace {
            inline app::P3D_Group__Class* type_info_ref = nullptr;
        }
        inline app::P3D_Group__Class** type_info = &type_info_ref;
        inline app::P3D_Group__Class* get_class() {
            return il2cpp::get_class<app::P3D_Group__Class>(type_info, "", "P3D_Group");
        }
        inline app::P3D_Group* create() {
            return il2cpp::create_object<app::P3D_Group>(get_class());
        }
        inline app::P3D_Group__Boxed* box(app::P3D_Group value) {
            return il2cpp::box_value<app::P3D_Group__Boxed>(get_class(), value);
        }
    } // namespace P3D_Group
} // namespace app::classes::types
