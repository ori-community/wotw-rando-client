#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ListView_c__Class.h>
#include <Modloader/app/structs/ListView_c.h>

namespace app::classes::types {
    namespace ListView_c {
        inline app::ListView_c__Class** type_info = (app::ListView_c__Class**)(modloader::win::memory::resolve_rva(0x04700EE0));
        inline app::ListView_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ListView_c__Class>(type_info, "Moon.UberStateVisualization", "ListView", "<>c");
        }
        inline app::ListView_c* create() {
            return il2cpp::create_object<app::ListView_c>(get_class());
        }
    } // namespace ListView_c
} // namespace app::classes::types
