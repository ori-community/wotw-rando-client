#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/P3D_Result__Array__Class.h>
#include <Modloader/app/structs/P3D_Result__Array.h>

namespace app::classes::types {
    namespace P3D_Result__Array {
        namespace {
            inline app::P3D_Result__Array__Class* type_info_ref = nullptr;
        }
        inline app::P3D_Result__Array__Class** type_info = &type_info_ref;
        inline app::P3D_Result__Array__Class* get_class() {
            return il2cpp::get_class<app::P3D_Result__Array__Class>(type_info, "", "P3D_Result[]");
        }
        inline app::P3D_Result__Array* create() {
            return il2cpp::create_object<app::P3D_Result__Array>(get_class());
        }
    } // namespace P3D_Result__Array
} // namespace app::classes::types
