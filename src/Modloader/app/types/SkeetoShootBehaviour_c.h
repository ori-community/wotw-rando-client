#pragma once
#include <Modloader/app/structs/SkeetoShootBehaviour_c.h>
#include <Modloader/app/structs/SkeetoShootBehaviour_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SkeetoShootBehaviour_c {
        inline app::SkeetoShootBehaviour_c__Class** type_info() {
            static app::SkeetoShootBehaviour_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SkeetoShootBehaviour_c__Class**)(modloader::win::memory::resolve_rva(0x04763FA0));
            }
            return cache;
        }
        inline app::SkeetoShootBehaviour_c__Class* get_class() {
            return il2cpp::get_nested_class<app::SkeetoShootBehaviour_c__Class>(type_info(), "", "SkeetoShootBehaviour", "<>c");
        }
        inline app::SkeetoShootBehaviour_c* create() {
            return il2cpp::create_object<app::SkeetoShootBehaviour_c>(get_class());
        }
    } // namespace SkeetoShootBehaviour_c
} // namespace app::classes::types
