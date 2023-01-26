#pragma once
#include <Modloader/app/structs/FaderB_c.h>
#include <Modloader/app/structs/FaderB_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FaderB_c {
        inline app::FaderB_c__Class** type_info() {
            static app::FaderB_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FaderB_c__Class**)(modloader::win::memory::resolve_rva(0x0473CA00));
            }
            return cache;
        }
        inline app::FaderB_c__Class* get_class() {
            return il2cpp::get_nested_class<app::FaderB_c__Class>(type_info(), "", "FaderB", "<>c");
        }
        inline app::FaderB_c* create() {
            return il2cpp::create_object<app::FaderB_c>(get_class());
        }
    } // namespace FaderB_c
} // namespace app::classes::types
