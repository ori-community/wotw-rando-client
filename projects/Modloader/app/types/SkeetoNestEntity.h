#pragma once
#include <Modloader/app/structs/SkeetoNestEntity.h>
#include <Modloader/app/structs/SkeetoNestEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoNestEntity {
        inline app::SkeetoNestEntity__Class** type_info() {
            static app::SkeetoNestEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkeetoNestEntity__Class**)(modloader::win::memory::resolve_rva(0x0471ECA0));
            }
            return cache;
        }
        inline app::SkeetoNestEntity__Class* get_class() {
            return il2cpp::get_class<app::SkeetoNestEntity__Class>(type_info(), "", "SkeetoNestEntity");
        }
        inline app::SkeetoNestEntity* create() {
            return il2cpp::create_object<app::SkeetoNestEntity>(get_class());
        }
    } // namespace SkeetoNestEntity
} // namespace app::classes::types
