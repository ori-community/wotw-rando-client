#pragma once
#include <Modloader/app/structs/Lever_c.h>
#include <Modloader/app/structs/Lever_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Lever_c {
        inline app::Lever_c__Class** type_info() {
            static app::Lever_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Lever_c__Class**)(modloader::win::memory::resolve_rva(0x04722CB8));
            }
            return cache;
        }
        inline app::Lever_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Lever_c__Class>(type_info(), "", "Lever", "<>c");
        }
        inline app::Lever_c* create() {
            return il2cpp::create_object<app::Lever_c>(get_class());
        }
    } // namespace Lever_c
} // namespace app::classes::types
