#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RammingBehaviour_RamState__Class.h>
#include <Modloader/app/structs/RammingBehaviour_RamState.h>

namespace app::classes::types {
    namespace RammingBehaviour_RamState {
        namespace {
            inline app::RammingBehaviour_RamState__Class* type_info_ref = nullptr;
        }
        inline app::RammingBehaviour_RamState__Class** type_info = &type_info_ref;
        inline app::RammingBehaviour_RamState__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_RamState__Class>(type_info, "Moon", "RammingBehaviour", "RamState");
        }
        inline app::RammingBehaviour_RamState* create() {
            return il2cpp::create_object<app::RammingBehaviour_RamState>(get_class());
        }
    } // namespace RammingBehaviour_RamState
} // namespace app::classes::types
