#pragma once
#include <Modloader/app/structs/DashOwlEnemy_c.h>
#include <Modloader/app/structs/DashOwlEnemy_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DashOwlEnemy_c {
        inline app::DashOwlEnemy_c__Class** type_info() {
            static app::DashOwlEnemy_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DashOwlEnemy_c__Class**)(modloader::win::memory::resolve_rva(0x04702AF8));
            }
            return cache;
        }
        inline app::DashOwlEnemy_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DashOwlEnemy_c__Class>(type_info(), "", "DashOwlEnemy", "<>c");
        }
        inline app::DashOwlEnemy_c* create() {
            return il2cpp::create_object<app::DashOwlEnemy_c>(get_class());
        }
    } // namespace DashOwlEnemy_c
} // namespace app::classes::types
