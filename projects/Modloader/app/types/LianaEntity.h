#pragma once
#include <Modloader/app/structs/LianaEntity.h>
#include <Modloader/app/structs/LianaEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LianaEntity {
        inline app::LianaEntity__Class** type_info() {
            static app::LianaEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LianaEntity__Class**)(modloader::win::memory::resolve_rva(0x04739F88));
            }
            return cache;
        }
        inline app::LianaEntity__Class* get_class() {
            return il2cpp::get_class<app::LianaEntity__Class>(type_info(), "", "LianaEntity");
        }
        inline app::LianaEntity* create() {
            return il2cpp::create_object<app::LianaEntity>(get_class());
        }
    } // namespace LianaEntity
} // namespace app::classes::types
