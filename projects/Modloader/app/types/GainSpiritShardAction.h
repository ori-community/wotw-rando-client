#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace GainSpiritShardAction {
        namespace {
            inline app::GainSpiritShardAction__Class* type_info_ref = nullptr;
        }
        inline app::GainSpiritShardAction__Class** type_info = &type_info_ref;
        inline app::GainSpiritShardAction__Class* get_class() {
            return il2cpp::get_class<app::GainSpiritShardAction__Class>(type_info, "", "GainSpiritShardAction");
        }
        inline app::GainSpiritShardAction* create() {
            return il2cpp::create_object<app::GainSpiritShardAction>(get_class());
        }
    } // namespace GainSpiritShardAction
} // namespace app::classes::types
