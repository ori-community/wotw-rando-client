#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegionPointer__Array {
        namespace {
            inline app::RegionPointer__Array__Class* type_info_ref = nullptr;
        }
        inline app::RegionPointer__Array__Class** type_info = &type_info_ref;
        inline app::RegionPointer__Array__Class* get_class() {
            return il2cpp::get_class<app::RegionPointer__Array__Class>(type_info, "TriangleNet.Geometry", "RegionPointer[]");
        }
        inline app::RegionPointer__Array* create() {
            return il2cpp::create_object<app::RegionPointer__Array>(get_class());
        }
    } // namespace RegionPointer__Array
} // namespace app::classes::types
