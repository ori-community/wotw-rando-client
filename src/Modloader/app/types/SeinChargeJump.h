#pragma once
#include <Modloader/app/structs/SeinChargeJump.h>
#include <Modloader/app/structs/SeinChargeJump__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinChargeJump {
        inline app::SeinChargeJump__Class** type_info() {
            static app::SeinChargeJump__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinChargeJump__Class**)(modloader::win::memory::resolve_rva(0x0478F340));
            }
            return cache;
        }
        inline app::SeinChargeJump__Class* get_class() {
            return il2cpp::get_class<app::SeinChargeJump__Class>(type_info(), "", "SeinChargeJump");
        }
        inline app::SeinChargeJump* create() {
            return il2cpp::create_object<app::SeinChargeJump>(get_class());
        }
    } // namespace SeinChargeJump
} // namespace app::classes::types
