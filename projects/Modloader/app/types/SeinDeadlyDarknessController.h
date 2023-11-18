#pragma once
#include <Modloader/app/structs/SeinDeadlyDarknessController.h>
#include <Modloader/app/structs/SeinDeadlyDarknessController__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDeadlyDarknessController {
        inline app::SeinDeadlyDarknessController__Class** type_info() {
            static app::SeinDeadlyDarknessController__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDeadlyDarknessController__Class**)(modloader::win::memory::resolve_rva(0x0472A628));
            }
            return cache;
        }
        inline app::SeinDeadlyDarknessController__Class* get_class() {
            return il2cpp::get_class<app::SeinDeadlyDarknessController__Class>(type_info(), "", "SeinDeadlyDarknessController");
        }
        inline app::SeinDeadlyDarknessController* create() {
            return il2cpp::create_object<app::SeinDeadlyDarknessController>(get_class());
        }
    } // namespace SeinDeadlyDarknessController
} // namespace app::classes::types
