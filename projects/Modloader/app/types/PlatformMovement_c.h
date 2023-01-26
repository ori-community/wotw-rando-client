#pragma once
#include <Modloader/app/structs/PlatformMovement_c.h>
#include <Modloader/app/structs/PlatformMovement_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PlatformMovement_c {
        inline app::PlatformMovement_c__Class** type_info() {
            static app::PlatformMovement_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PlatformMovement_c__Class**)(modloader::win::memory::resolve_rva(0x04732980));
            }
            return cache;
        }
        inline app::PlatformMovement_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PlatformMovement_c__Class>(type_info(), "", "PlatformMovement", "<>c");
        }
        inline app::PlatformMovement_c* create() {
            return il2cpp::create_object<app::PlatformMovement_c>(get_class());
        }
    } // namespace PlatformMovement_c
} // namespace app::classes::types
