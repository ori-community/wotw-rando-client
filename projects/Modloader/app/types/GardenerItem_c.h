#pragma once
#include <Modloader/app/structs/GardenerItem_c.h>
#include <Modloader/app/structs/GardenerItem_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GardenerItem_c {
        inline app::GardenerItem_c__Class** type_info() {
            static app::GardenerItem_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GardenerItem_c__Class**)(modloader::win::memory::resolve_rva(0x04774748));
            }
            return cache;
        }
        inline app::GardenerItem_c__Class* get_class() {
            return il2cpp::get_nested_class<app::GardenerItem_c__Class>(type_info(), "", "GardenerItem", "<>c");
        }
        inline app::GardenerItem_c* create() {
            return il2cpp::create_object<app::GardenerItem_c>(get_class());
        }
    } // namespace GardenerItem_c
} // namespace app::classes::types
