#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SweepLine_SplayNode__Array__Class.h>
#include <Modloader/app/structs/SweepLine_SplayNode__Array.h>

namespace app::classes::types {
    namespace SweepLine_SplayNode__Array {
        namespace {
            inline app::SweepLine_SplayNode__Array__Class* type_info_ref = nullptr;
        }
        inline app::SweepLine_SplayNode__Array__Class** type_info = &type_info_ref;
        inline app::SweepLine_SplayNode__Array__Class* get_class() {
            return il2cpp::get_class<app::SweepLine_SplayNode__Array__Class>(type_info, "TriangleNet.Meshing.Algorithm", "SweepLine+SplayNode[]");
        }
        inline app::SweepLine_SplayNode__Array* create() {
            return il2cpp::create_object<app::SweepLine_SplayNode__Array>(get_class());
        }
    } // namespace SweepLine_SplayNode__Array
} // namespace app::classes::types
