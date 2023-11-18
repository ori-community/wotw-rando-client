#pragma once
#include <Modloader/app/structs/ShowFixedTimeTextEntity.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowFixedTimeTextEntity {
        inline app::ShowFixedTimeTextEntity__Class** type_info() {
            static app::ShowFixedTimeTextEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShowFixedTimeTextEntity__Class**)(modloader::win::memory::resolve_rva(0x04796670));
            }
            return cache;
        }
        inline app::ShowFixedTimeTextEntity__Class* get_class() {
            return il2cpp::get_class<app::ShowFixedTimeTextEntity__Class>(type_info(), "Moon.Timeline", "ShowFixedTimeTextEntity");
        }
        inline app::ShowFixedTimeTextEntity* create() {
            return il2cpp::create_object<app::ShowFixedTimeTextEntity>(get_class());
        }
    } // namespace ShowFixedTimeTextEntity
} // namespace app::classes::types
