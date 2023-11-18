#pragma once
#include <Modloader/app/structs/MortarEntity.h>
#include <Modloader/app/structs/MortarEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarEntity {
        inline app::MortarEntity__Class** type_info() {
            static app::MortarEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MortarEntity__Class**)(modloader::win::memory::resolve_rva(0x0475E648));
            }
            return cache;
        }
        inline app::MortarEntity__Class* get_class() {
            return il2cpp::get_class<app::MortarEntity__Class>(type_info(), "", "MortarEntity");
        }
        inline app::MortarEntity* create() {
            return il2cpp::create_object<app::MortarEntity>(get_class());
        }
    } // namespace MortarEntity
} // namespace app::classes::types
