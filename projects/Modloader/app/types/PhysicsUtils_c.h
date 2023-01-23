#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhysicsUtils_c__Class.h>
#include <Modloader/app/structs/PhysicsUtils_c.h>

namespace app::classes::types {
    namespace PhysicsUtils_c {
        inline app::PhysicsUtils_c__Class** type_info = (app::PhysicsUtils_c__Class**)(modloader::win::memory::resolve_rva(0x04709120));
        inline app::PhysicsUtils_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PhysicsUtils_c__Class>(type_info, "", "PhysicsUtils", "<>c");
        }
        inline app::PhysicsUtils_c* create() {
            return il2cpp::create_object<app::PhysicsUtils_c>(get_class());
        }
    } // namespace PhysicsUtils_c
} // namespace app::classes::types
