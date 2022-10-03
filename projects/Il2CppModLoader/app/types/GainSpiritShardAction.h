#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GainSpiritShardAction {
        namespace {
            app::GainSpiritShardAction__Class* type_info_ref = nullptr;
        }
        app::GainSpiritShardAction__Class** type_info = &type_info_ref;
        inline app::GainSpiritShardAction__Class* get_class() {
            return il2cpp::get_class<app::GainSpiritShardAction__Class>(type_info, "", "GainSpiritShardAction");
        }
        inline app::GainSpiritShardAction* create() {
            return il2cpp::create_object<app::GainSpiritShardAction>(get_class());
        }
    } // namespace GainSpiritShardAction
} // namespace app::classes::types
