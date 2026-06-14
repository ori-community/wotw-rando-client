#pragma once
#include <Modloader/app/structs/WandererNPC.h>
#include <Modloader/app/structs/WandererNPC__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererNPC {
        inline app::WandererNPC__Class** type_info() {
            static app::WandererNPC__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WandererNPC__Class**)(modloader::win::memory::resolve_rva(0x04747888));
            }
            return cache;
        }
        inline app::WandererNPC__Class* get_class() {
            return il2cpp::get_class<app::WandererNPC__Class>(type_info(), "", "WandererNPC");
        }
        inline app::WandererNPC* create() {
            return il2cpp::create_object<app::WandererNPC>(get_class());
        }
    } // namespace WandererNPC
} // namespace app::classes::types
