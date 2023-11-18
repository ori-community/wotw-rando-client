#pragma once
#include <Modloader/app/structs/SkeetoEntity.h>
#include <Modloader/app/structs/SkeetoEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoEntity {
        inline app::SkeetoEntity__Class** type_info() {
            static app::SkeetoEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkeetoEntity__Class**)(modloader::win::memory::resolve_rva(0x0476E3F8));
            }
            return cache;
        }
        inline app::SkeetoEntity__Class* get_class() {
            return il2cpp::get_class<app::SkeetoEntity__Class>(type_info(), "", "SkeetoEntity");
        }
        inline app::SkeetoEntity* create() {
            return il2cpp::create_object<app::SkeetoEntity>(get_class());
        }
    } // namespace SkeetoEntity
} // namespace app::classes::types
