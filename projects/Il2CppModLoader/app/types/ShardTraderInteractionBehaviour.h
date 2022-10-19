#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShardTraderInteractionBehaviour {
        namespace {
            inline app::ShardTraderInteractionBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::ShardTraderInteractionBehaviour__Class** type_info = &type_info_ref;
        inline app::ShardTraderInteractionBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderInteractionBehaviour__Class>(type_info, "Moon", "ShardTraderInteractionBehaviour");
        }
        inline app::ShardTraderInteractionBehaviour* create() {
            return il2cpp::create_object<app::ShardTraderInteractionBehaviour>(get_class());
        }
    } // namespace ShardTraderInteractionBehaviour
} // namespace app::classes::types
