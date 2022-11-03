#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ChargeShotCollider_c {
        inline app::ChargeShotCollider_c__Class** type_info = (app::ChargeShotCollider_c__Class**)(modloader::win::memory::resolve_rva(0x04741BF0));
        inline app::ChargeShotCollider_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ChargeShotCollider_c__Class>(type_info, "", "ChargeShotCollider", "<>c");
        }
        inline app::ChargeShotCollider_c* create() {
            return il2cpp::create_object<app::ChargeShotCollider_c>(get_class());
        }
    } // namespace ChargeShotCollider_c
} // namespace app::classes::types
