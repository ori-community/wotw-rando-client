#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IProjectileDetonatable__Class.h>

namespace app::classes::types {
    namespace IProjectileDetonatable {
        inline app::IProjectileDetonatable__Class** type_info = (app::IProjectileDetonatable__Class**)(modloader::win::memory::resolve_rva(0x04728AB8));
        inline app::IProjectileDetonatable__Class* get_class() {
            return il2cpp::get_class<app::IProjectileDetonatable__Class>(type_info, "", "IProjectileDetonatable");
        }
    } // namespace IProjectileDetonatable
} // namespace app::classes::types
