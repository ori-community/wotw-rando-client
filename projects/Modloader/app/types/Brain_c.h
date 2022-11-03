#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Brain_c {
        inline app::Brain_c__Class** type_info = (app::Brain_c__Class**)(modloader::win::memory::resolve_rva(0x047550E0));
        inline app::Brain_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Brain_c__Class>(type_info, "Moon", "Brain", "<>c");
        }
        inline app::Brain_c* create() {
            return il2cpp::create_object<app::Brain_c>(get_class());
        }
    } // namespace Brain_c
} // namespace app::classes::types
