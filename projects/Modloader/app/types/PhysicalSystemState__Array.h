#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhysicalSystemState__Array__Class.h>
#include <Modloader/app/structs/PhysicalSystemState__Array.h>

namespace app::classes::types {
    namespace PhysicalSystemState__Array {
        inline app::PhysicalSystemState__Array__Class** type_info = (app::PhysicalSystemState__Array__Class**)(modloader::win::memory::resolve_rva(0x047470E8));
        inline app::PhysicalSystemState__Array__Class* get_class() {
            return il2cpp::get_class<app::PhysicalSystemState__Array__Class>(type_info, "", "PhysicalSystemState[]");
        }
        inline app::PhysicalSystemState__Array* create() {
            return il2cpp::create_object<app::PhysicalSystemState__Array>(get_class());
        }
    } // namespace PhysicalSystemState__Array
} // namespace app::classes::types
