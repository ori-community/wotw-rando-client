#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/XboxOneFlow_c__Class.h>
#include <Modloader/app/structs/XboxOneFlow_c.h>

namespace app::classes::types {
    namespace XboxOneFlow_c {
        inline app::XboxOneFlow_c__Class** type_info = (app::XboxOneFlow_c__Class**)(modloader::win::memory::resolve_rva(0x0473CDD0));
        inline app::XboxOneFlow_c__Class* get_class() {
            return il2cpp::get_nested_class<app::XboxOneFlow_c__Class>(type_info, "", "XboxOneFlow", "<>c");
        }
        inline app::XboxOneFlow_c* create() {
            return il2cpp::create_object<app::XboxOneFlow_c>(get_class());
        }
    } // namespace XboxOneFlow_c
} // namespace app::classes::types
