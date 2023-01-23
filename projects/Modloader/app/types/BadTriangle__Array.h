#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BadTriangle__Array__Class.h>
#include <Modloader/app/structs/BadTriangle__Array.h>

namespace app::classes::types {
    namespace BadTriangle__Array {
        inline app::BadTriangle__Array__Class** type_info = (app::BadTriangle__Array__Class**)(modloader::win::memory::resolve_rva(0x0472C2E8));
        inline app::BadTriangle__Array__Class* get_class() {
            return il2cpp::get_class<app::BadTriangle__Array__Class>(type_info, "TriangleNet.Meshing.Data", "BadTriangle[]");
        }
        inline app::BadTriangle__Array* create() {
            return il2cpp::create_object<app::BadTriangle__Array>(get_class());
        }
    } // namespace BadTriangle__Array
} // namespace app::classes::types
