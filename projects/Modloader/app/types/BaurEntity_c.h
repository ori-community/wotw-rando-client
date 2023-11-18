#pragma once
#include <Modloader/app/structs/BaurEntity_c.h>
#include <Modloader/app/structs/BaurEntity_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BaurEntity_c {
        inline app::BaurEntity_c__Class** type_info() {
            static app::BaurEntity_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BaurEntity_c__Class**)(modloader::win::memory::resolve_rva(0x04790BA8));
            }
            return cache;
        }
        inline app::BaurEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::BaurEntity_c__Class>(type_info(), "", "BaurEntity", "<>c");
        }
        inline app::BaurEntity_c* create() {
            return il2cpp::create_object<app::BaurEntity_c>(get_class());
        }
    } // namespace BaurEntity_c
} // namespace app::classes::types
