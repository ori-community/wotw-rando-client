#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ShardTraderIdleBehaviour {
        namespace {
            app::ShardTraderIdleBehaviour__Class* type_info_ref = nullptr;
        }
        app::ShardTraderIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::ShardTraderIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderIdleBehaviour__Class>(type_info, "Moon", "ShardTraderIdleBehaviour");
        }
        inline app::ShardTraderIdleBehaviour* create() {
            return il2cpp::create_object<app::ShardTraderIdleBehaviour>(get_class());
        }
    } // namespace ShardTraderIdleBehaviour
} // namespace app::classes::types
