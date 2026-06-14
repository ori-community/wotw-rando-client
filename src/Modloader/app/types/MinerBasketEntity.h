#pragma once
#include <Modloader/app/structs/MinerBasketEntity.h>
#include <Modloader/app/structs/MinerBasketEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerBasketEntity {
        inline app::MinerBasketEntity__Class** type_info() {
            static app::MinerBasketEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MinerBasketEntity__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MinerBasketEntity__Class* get_class() {
            return il2cpp::get_class<app::MinerBasketEntity__Class>(type_info(), "", "MinerBasketEntity");
        }
        inline app::MinerBasketEntity* create() {
            return il2cpp::create_object<app::MinerBasketEntity>(get_class());
        }
    } // namespace MinerBasketEntity
} // namespace app::classes::types
