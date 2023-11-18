#pragma once
#include <Modloader/app/structs/Kickback.h>
#include <Modloader/app/structs/Kickback__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Kickback {
        inline app::Kickback__Class** type_info() {
            static app::Kickback__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Kickback__Class**)(modloader::win::memory::resolve_rva(0x0478BF20));
            }
            return cache;
        }
        inline app::Kickback__Class* get_class() {
            return il2cpp::get_class<app::Kickback__Class>(type_info(), "", "Kickback");
        }
        inline app::Kickback* create() {
            return il2cpp::create_object<app::Kickback>(get_class());
        }
    } // namespace Kickback
} // namespace app::classes::types
