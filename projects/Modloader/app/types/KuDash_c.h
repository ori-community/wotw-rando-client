#pragma once
#include <Modloader/app/structs/KuDash_c.h>
#include <Modloader/app/structs/KuDash_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuDash_c {
        inline app::KuDash_c__Class** type_info() {
            static app::KuDash_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KuDash_c__Class**)(modloader::win::memory::resolve_rva(0x04793118));
            }
            return cache;
        }
        inline app::KuDash_c__Class* get_class() {
            return il2cpp::get_nested_class<app::KuDash_c__Class>(type_info(), "", "KuDash", "<>c");
        }
        inline app::KuDash_c* create() {
            return il2cpp::create_object<app::KuDash_c>(get_class());
        }
    } // namespace KuDash_c
} // namespace app::classes::types
