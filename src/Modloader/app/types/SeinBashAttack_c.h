#pragma once
#include <Modloader/app/structs/SeinBashAttack_c.h>
#include <Modloader/app/structs/SeinBashAttack_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBashAttack_c {
        inline app::SeinBashAttack_c__Class** type_info() {
            static app::SeinBashAttack_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinBashAttack_c__Class**)(modloader::win::memory::resolve_rva(0x04702B90));
            }
            return cache;
        }
        inline app::SeinBashAttack_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinBashAttack_c__Class>(type_info(), "", "SeinBashAttack", "<>c");
        }
        inline app::SeinBashAttack_c* create() {
            return il2cpp::create_object<app::SeinBashAttack_c>(get_class());
        }
    } // namespace SeinBashAttack_c
} // namespace app::classes::types
