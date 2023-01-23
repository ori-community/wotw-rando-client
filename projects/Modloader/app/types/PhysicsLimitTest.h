#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PhysicsLimitTest__Class.h>
#include <Modloader/app/structs/PhysicsLimitTest.h>

namespace app::classes::types {
    namespace PhysicsLimitTest {
        inline app::PhysicsLimitTest__Class** type_info = (app::PhysicsLimitTest__Class**)(modloader::win::memory::resolve_rva(0x04767F20));
        inline app::PhysicsLimitTest__Class* get_class() {
            return il2cpp::get_class<app::PhysicsLimitTest__Class>(type_info, "", "PhysicsLimitTest");
        }
        inline app::PhysicsLimitTest* create() {
            return il2cpp::create_object<app::PhysicsLimitTest>(get_class());
        }
    } // namespace PhysicsLimitTest
} // namespace app::classes::types
