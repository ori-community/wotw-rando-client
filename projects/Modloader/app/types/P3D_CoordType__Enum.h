#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/P3D_CoordType__Enum__Class.h>
#include <Modloader/app/structs/P3D_CoordType__Enum.h>

namespace app::classes::types {
    namespace P3D_CoordType__Enum {
        namespace {
            inline app::P3D_CoordType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::P3D_CoordType__Enum__Class** type_info = &type_info_ref;
        inline app::P3D_CoordType__Enum__Class* get_class() {
            return il2cpp::get_class<app::P3D_CoordType__Enum__Class>(type_info, "", "P3D_CoordType");
        }
        inline app::P3D_CoordType__Enum* create() {
            return il2cpp::create_object<app::P3D_CoordType__Enum>(get_class());
        }
    } // namespace P3D_CoordType__Enum
} // namespace app::classes::types
