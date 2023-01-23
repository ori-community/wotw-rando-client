#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MinerBasketEntity__Class.h>
#include <Modloader/app/structs/MinerBasketEntity.h>

namespace app::classes::types {
    namespace MinerBasketEntity {
        namespace {
            inline app::MinerBasketEntity__Class* type_info_ref = nullptr;
        }
        inline app::MinerBasketEntity__Class** type_info = &type_info_ref;
        inline app::MinerBasketEntity__Class* get_class() {
            return il2cpp::get_class<app::MinerBasketEntity__Class>(type_info, "", "MinerBasketEntity");
        }
        inline app::MinerBasketEntity* create() {
            return il2cpp::create_object<app::MinerBasketEntity>(get_class());
        }
    } // namespace MinerBasketEntity
} // namespace app::classes::types
