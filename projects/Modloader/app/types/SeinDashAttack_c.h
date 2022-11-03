#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDashAttack_c {
        inline app::SeinDashAttack_c__Class** type_info = (app::SeinDashAttack_c__Class**)(modloader::win::memory::resolve_rva(0x04783328));
        inline app::SeinDashAttack_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDashAttack_c__Class>(type_info, "", "SeinDashAttack", "<>c");
        }
        inline app::SeinDashAttack_c* create() {
            return il2cpp::create_object<app::SeinDashAttack_c>(get_class());
        }
    } // namespace SeinDashAttack_c
} // namespace app::classes::types
