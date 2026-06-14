#pragma once
#include <Modloader/app/structs/LocomotionUtils.h>
#include <Modloader/app/structs/LocomotionUtils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LocomotionUtils {
        inline app::LocomotionUtils__Class** type_info() {
            static app::LocomotionUtils__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LocomotionUtils__Class**)(modloader::win::memory::resolve_rva(0x04749800));
            }
            return cache;
        }
        inline app::LocomotionUtils__Class* get_class() {
            return il2cpp::get_class<app::LocomotionUtils__Class>(type_info(), "", "LocomotionUtils");
        }
        inline app::LocomotionUtils* create() {
            return il2cpp::create_object<app::LocomotionUtils>(get_class());
        }
    } // namespace LocomotionUtils
} // namespace app::classes::types
