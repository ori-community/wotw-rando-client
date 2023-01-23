#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Turret__Class.h>
#include <Modloader/app/structs/Turret.h>

namespace app::classes::types {
    namespace Turret {
        namespace {
            inline app::Turret__Class* type_info_ref = nullptr;
        }
        inline app::Turret__Class** type_info = &type_info_ref;
        inline app::Turret__Class* get_class() {
            return il2cpp::get_class<app::Turret__Class>(type_info, "RootMotion.Demos", "Turret");
        }
        inline app::Turret* create() {
            return il2cpp::create_object<app::Turret>(get_class());
        }
    } // namespace Turret
} // namespace app::classes::types
