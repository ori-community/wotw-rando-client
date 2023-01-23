#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum__Array__Class.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum__Array.h>

namespace app::classes::types {
    namespace SurfaceMaterialType__Enum__Array {
        inline app::SurfaceMaterialType__Enum__Array__Class** type_info = (app::SurfaceMaterialType__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04731668));
        inline app::SurfaceMaterialType__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::SurfaceMaterialType__Enum__Array__Class>(type_info, "", "SurfaceMaterialType[]");
        }
        inline app::SurfaceMaterialType__Enum__Array* create() {
            return il2cpp::create_object<app::SurfaceMaterialType__Enum__Array>(get_class());
        }
    } // namespace SurfaceMaterialType__Enum__Array
} // namespace app::classes::types
