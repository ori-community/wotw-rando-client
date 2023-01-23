#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DefaultBinder_c__Class.h>
#include <Modloader/app/structs/DefaultBinder_c.h>

namespace app::classes::types {
    namespace DefaultBinder_c {
        inline app::DefaultBinder_c__Class** type_info = (app::DefaultBinder_c__Class**)(modloader::win::memory::resolve_rva(0x04739120));
        inline app::DefaultBinder_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DefaultBinder_c__Class>(type_info, "System", "DefaultBinder", "<>c");
        }
        inline app::DefaultBinder_c* create() {
            return il2cpp::create_object<app::DefaultBinder_c>(get_class());
        }
    } // namespace DefaultBinder_c
} // namespace app::classes::types
