#pragma once
#include <Modloader/app/structs/Index_c.h>
#include <Modloader/app/structs/Index_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Index_c {
        inline app::Index_c__Class** type_info() {
            static app::Index_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Index_c__Class**)(modloader::win::memory::resolve_rva(0x04725408));
            }
            return cache;
        }
        inline app::Index_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Index_c__Class>(type_info(), "System.Data", "Index", "<>c");
        }
        inline app::Index_c* create() {
            return il2cpp::create_object<app::Index_c>(get_class());
        }
    } // namespace Index_c
} // namespace app::classes::types
