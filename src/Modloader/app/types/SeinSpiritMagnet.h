#pragma once
#include <Modloader/app/structs/SeinSpiritMagnet.h>
#include <Modloader/app/structs/SeinSpiritMagnet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritMagnet {
        inline app::SeinSpiritMagnet__Class** type_info() {
            static app::SeinSpiritMagnet__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinSpiritMagnet__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinSpiritMagnet__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritMagnet__Class>(type_info(), "", "SeinSpiritMagnet");
        }
        inline app::SeinSpiritMagnet* create() {
            return il2cpp::create_object<app::SeinSpiritMagnet>(get_class());
        }
    } // namespace SeinSpiritMagnet
} // namespace app::classes::types
