#pragma once
#include <Modloader/app/structs/MinerBuilderEntity.h>
#include <Modloader/app/structs/MinerBuilderEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerBuilderEntity {
        inline app::MinerBuilderEntity__Class** type_info() {
            static app::MinerBuilderEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MinerBuilderEntity__Class**)(modloader::win::memory::resolve_rva(0x0474ACB8));
            }
            return cache;
        }
        inline app::MinerBuilderEntity__Class* get_class() {
            return il2cpp::get_class<app::MinerBuilderEntity__Class>(type_info(), "", "MinerBuilderEntity");
        }
        inline app::MinerBuilderEntity* create() {
            return il2cpp::create_object<app::MinerBuilderEntity>(get_class());
        }
    } // namespace MinerBuilderEntity
} // namespace app::classes::types
