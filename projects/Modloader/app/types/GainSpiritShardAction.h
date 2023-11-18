#pragma once
#include <Modloader/app/structs/GainSpiritShardAction.h>
#include <Modloader/app/structs/GainSpiritShardAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GainSpiritShardAction {
        inline app::GainSpiritShardAction__Class** type_info() {
            static app::GainSpiritShardAction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GainSpiritShardAction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GainSpiritShardAction__Class* get_class() {
            return il2cpp::get_class<app::GainSpiritShardAction__Class>(type_info(), "", "GainSpiritShardAction");
        }
        inline app::GainSpiritShardAction* create() {
            return il2cpp::create_object<app::GainSpiritShardAction>(get_class());
        }
    } // namespace GainSpiritShardAction
} // namespace app::classes::types
