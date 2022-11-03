#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShardTraderIdleBehaviour {
        namespace {
            inline app::ShardTraderIdleBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::ShardTraderIdleBehaviour__Class** type_info = &type_info_ref;
        inline app::ShardTraderIdleBehaviour__Class* get_class() {
            return il2cpp::get_class<app::ShardTraderIdleBehaviour__Class>(type_info, "Moon", "ShardTraderIdleBehaviour");
        }
        inline app::ShardTraderIdleBehaviour* create() {
            return il2cpp::create_object<app::ShardTraderIdleBehaviour>(get_class());
        }
    } // namespace ShardTraderIdleBehaviour
} // namespace app::classes::types
