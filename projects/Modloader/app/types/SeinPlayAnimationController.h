#pragma once
#include <Modloader/app/structs/SeinPlayAnimationController.h>
#include <Modloader/app/structs/SeinPlayAnimationController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinPlayAnimationController {
        inline app::SeinPlayAnimationController__Class** type_info() {
            static app::SeinPlayAnimationController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinPlayAnimationController__Class**)(modloader::win::memory::resolve_rva(0x04716F80));
            }
            return cache;
        }
        inline app::SeinPlayAnimationController__Class* get_class() {
            return il2cpp::get_class<app::SeinPlayAnimationController__Class>(type_info(), "", "SeinPlayAnimationController");
        }
        inline app::SeinPlayAnimationController* create() {
            return il2cpp::create_object<app::SeinPlayAnimationController>(get_class());
        }
    } // namespace SeinPlayAnimationController
} // namespace app::classes::types
