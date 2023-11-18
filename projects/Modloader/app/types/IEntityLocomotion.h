#pragma once
#include <Modloader/app/structs/IEntityLocomotion.h>
#include <Modloader/app/structs/IEntityLocomotion__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEntityLocomotion {
        inline app::IEntityLocomotion__Class** type_info() {
            static app::IEntityLocomotion__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IEntityLocomotion__Class**)(modloader::win::memory::resolve_rva(0x04763100));
            }
            return cache;
        }
        inline app::IEntityLocomotion__Class* get_class() {
            return il2cpp::get_class<app::IEntityLocomotion__Class>(type_info(), "", "IEntityLocomotion");
        }
    } // namespace IEntityLocomotion
} // namespace app::classes::types
