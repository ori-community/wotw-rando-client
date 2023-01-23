#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RammingThrownState__Class.h>
#include <Modloader/app/structs/RammingThrownState.h>

namespace app::classes::types {
    namespace RammingThrownState {
        namespace {
            inline app::RammingThrownState__Class* type_info_ref = nullptr;
        }
        inline app::RammingThrownState__Class** type_info = &type_info_ref;
        inline app::RammingThrownState__Class* get_class() {
            return il2cpp::get_class<app::RammingThrownState__Class>(type_info, "", "RammingThrownState");
        }
        inline app::RammingThrownState* create() {
            return il2cpp::create_object<app::RammingThrownState>(get_class());
        }
    } // namespace RammingThrownState
} // namespace app::classes::types
