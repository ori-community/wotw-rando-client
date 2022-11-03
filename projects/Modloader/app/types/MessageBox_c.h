#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MessageBox_c {
        inline app::MessageBox_c__Class** type_info = (app::MessageBox_c__Class**)(modloader::win::memory::resolve_rva(0x04792270));
        inline app::MessageBox_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MessageBox_c__Class>(type_info, "", "MessageBox", "<>c");
        }
        inline app::MessageBox_c* create() {
            return il2cpp::create_object<app::MessageBox_c>(get_class());
        }
    } // namespace MessageBox_c
} // namespace app::classes::types
