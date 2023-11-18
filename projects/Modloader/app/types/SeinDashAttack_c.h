#pragma once
#include <Modloader/app/structs/SeinDashAttack_c.h>
#include <Modloader/app/structs/SeinDashAttack_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDashAttack_c {
        inline app::SeinDashAttack_c__Class** type_info() {
            static app::SeinDashAttack_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDashAttack_c__Class**)(modloader::win::memory::resolve_rva(0x04783328));
            }
            return cache;
        }
        inline app::SeinDashAttack_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinDashAttack_c__Class>(type_info(), "", "SeinDashAttack", "<>c");
        }
        inline app::SeinDashAttack_c* create() {
            return il2cpp::create_object<app::SeinDashAttack_c>(get_class());
        }
    } // namespace SeinDashAttack_c
} // namespace app::classes::types
