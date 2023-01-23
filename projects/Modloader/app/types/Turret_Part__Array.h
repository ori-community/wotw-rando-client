#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Turret_Part__Array__Class.h>
#include <Modloader/app/structs/Turret_Part__Array.h>

namespace app::classes::types {
    namespace Turret_Part__Array {
        namespace {
            inline app::Turret_Part__Array__Class* type_info_ref = nullptr;
        }
        inline app::Turret_Part__Array__Class** type_info = &type_info_ref;
        inline app::Turret_Part__Array__Class* get_class() {
            return il2cpp::get_class<app::Turret_Part__Array__Class>(type_info, "RootMotion.Demos", "Turret+Part[]");
        }
        inline app::Turret_Part__Array* create() {
            return il2cpp::create_object<app::Turret_Part__Array>(get_class());
        }
    } // namespace Turret_Part__Array
} // namespace app::classes::types
