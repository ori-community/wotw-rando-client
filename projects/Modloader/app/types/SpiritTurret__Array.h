#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpiritTurret__Array__Class.h>
#include <Modloader/app/structs/SpiritTurret__Array.h>

namespace app::classes::types {
    namespace SpiritTurret__Array {
        namespace {
            inline app::SpiritTurret__Array__Class* type_info_ref = nullptr;
        }
        inline app::SpiritTurret__Array__Class** type_info = &type_info_ref;
        inline app::SpiritTurret__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritTurret__Array__Class>(type_info, "", "SpiritTurret[]");
        }
        inline app::SpiritTurret__Array* create() {
            return il2cpp::create_object<app::SpiritTurret__Array>(get_class());
        }
    } // namespace SpiritTurret__Array
} // namespace app::classes::types
