#pragma once
#include <Modloader/app/structs/WandererEntity.h>
#include <Modloader/app/structs/WandererEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WandererEntity {
        inline app::WandererEntity__Class** type_info() {
            static app::WandererEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WandererEntity__Class**)(modloader::win::memory::resolve_rva(0x04725B28));
            }
            return cache;
        }
        inline app::WandererEntity__Class* get_class() {
            return il2cpp::get_class<app::WandererEntity__Class>(type_info(), "", "WandererEntity");
        }
        inline app::WandererEntity* create() {
            return il2cpp::create_object<app::WandererEntity>(get_class());
        }
    } // namespace WandererEntity
} // namespace app::classes::types
