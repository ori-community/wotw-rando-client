#pragma once
#include <Modloader/app/structs/BabyWormSand_c.h>
#include <Modloader/app/structs/BabyWormSand_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BabyWormSand_c {
        inline app::BabyWormSand_c__Class** type_info() {
            static app::BabyWormSand_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BabyWormSand_c__Class**)(modloader::win::memory::resolve_rva(0x047941F8));
            }
            return cache;
        }
        inline app::BabyWormSand_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BabyWormSand_c__Class>(type_info(), "", "BabyWormSand", "<>c");
        }
        inline app::BabyWormSand_c* create() {
            return il2cpp::create_object<app::BabyWormSand_c>(get_class());
        }
    } // namespace BabyWormSand_c
} // namespace app::classes::types
