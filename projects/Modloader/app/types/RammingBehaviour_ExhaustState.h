#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RammingBehaviour_ExhaustState {
        inline app::RammingBehaviour_ExhaustState__Class** type_info = (app::RammingBehaviour_ExhaustState__Class**)(modloader::win::memory::resolve_rva(0x04791B98));
        inline app::RammingBehaviour_ExhaustState__Class* get_class() {
            return il2cpp::get_nested_class<app::RammingBehaviour_ExhaustState__Class>(type_info, "Moon", "RammingBehaviour", "ExhaustState");
        }
        inline app::RammingBehaviour_ExhaustState* create() {
            return il2cpp::create_object<app::RammingBehaviour_ExhaustState>(get_class());
        }
    } // namespace RammingBehaviour_ExhaustState
} // namespace app::classes::types
