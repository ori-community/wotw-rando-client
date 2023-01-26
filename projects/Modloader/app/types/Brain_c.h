#pragma once
#include <Modloader/app/structs/Brain_c.h>
#include <Modloader/app/structs/Brain_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Brain_c {
        inline app::Brain_c__Class** type_info() {
            static app::Brain_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Brain_c__Class**)(modloader::win::memory::resolve_rva(0x047550E0));
            }
            return cache;
        }
        inline app::Brain_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Brain_c__Class>(type_info(), "Moon", "Brain", "<>c");
        }
        inline app::Brain_c* create() {
            return il2cpp::create_object<app::Brain_c>(get_class());
        }
    } // namespace Brain_c
} // namespace app::classes::types
