#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WormIdleState__Class.h>
#include <Modloader/app/structs/WormIdleState.h>

namespace app::classes::types {
    namespace WormIdleState {
        namespace {
            inline app::WormIdleState__Class* type_info_ref = nullptr;
        }
        inline app::WormIdleState__Class** type_info = &type_info_ref;
        inline app::WormIdleState__Class* get_class() {
            return il2cpp::get_class<app::WormIdleState__Class>(type_info, "", "WormIdleState");
        }
        inline app::WormIdleState* create() {
            return il2cpp::create_object<app::WormIdleState>(get_class());
        }
    } // namespace WormIdleState
} // namespace app::classes::types
