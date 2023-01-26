#pragma once
#include <Modloader/app/structs/BowArrow.h>
#include <Modloader/app/structs/BowArrow__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BowArrow {
        inline app::BowArrow__Class** type_info() {
            static app::BowArrow__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BowArrow__Class**)(modloader::win::memory::resolve_rva(0x0473FAA8));
            }
            return cache;
        }
        inline app::BowArrow__Class* get_class() {
            return il2cpp::get_class<app::BowArrow__Class>(type_info(), "", "BowArrow");
        }
        inline app::BowArrow* create() {
            return il2cpp::create_object<app::BowArrow>(get_class());
        }
    } // namespace BowArrow
} // namespace app::classes::types
