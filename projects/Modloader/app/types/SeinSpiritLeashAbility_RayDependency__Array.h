#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility_RayDependency__Array__Class.h>
#include <Modloader/app/structs/SeinSpiritLeashAbility_RayDependency__Array.h>

namespace app::classes::types {
    namespace SeinSpiritLeashAbility_RayDependency__Array {
        inline app::SeinSpiritLeashAbility_RayDependency__Array__Class** type_info = (app::SeinSpiritLeashAbility_RayDependency__Array__Class**)(modloader::win::memory::resolve_rva(0x0474DC50));
        inline app::SeinSpiritLeashAbility_RayDependency__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritLeashAbility_RayDependency__Array__Class>(type_info, "", "SeinSpiritLeashAbility+RayDependency[]");
        }
        inline app::SeinSpiritLeashAbility_RayDependency__Array* create() {
            return il2cpp::create_object<app::SeinSpiritLeashAbility_RayDependency__Array>(get_class());
        }
    } // namespace SeinSpiritLeashAbility_RayDependency__Array
} // namespace app::classes::types
