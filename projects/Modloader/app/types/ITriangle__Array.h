#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ITriangle__Array__Class.h>
#include <Modloader/app/structs/ITriangle__Array.h>

namespace app::classes::types {
    namespace ITriangle__Array {
        namespace {
            inline app::ITriangle__Array__Class* type_info_ref = nullptr;
        }
        inline app::ITriangle__Array__Class** type_info = &type_info_ref;
        inline app::ITriangle__Array__Class* get_class() {
            return il2cpp::get_class<app::ITriangle__Array__Class>(type_info, "TriangleNet.Geometry", "ITriangle[]");
        }
        inline app::ITriangle__Array* create() {
            return il2cpp::create_object<app::ITriangle__Array>(get_class());
        }
    } // namespace ITriangle__Array
} // namespace app::classes::types
