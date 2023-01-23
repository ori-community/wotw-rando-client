#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PointerUIBase_c__Class.h>
#include <Modloader/app/structs/PointerUIBase_c.h>

namespace app::classes::types {
    namespace PointerUIBase_c {
        inline app::PointerUIBase_c__Class** type_info = (app::PointerUIBase_c__Class**)(modloader::win::memory::resolve_rva(0x0472EC60));
        inline app::PointerUIBase_c__Class* get_class() {
            return il2cpp::get_nested_class<app::PointerUIBase_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PointerUIBase", "<>c");
        }
        inline app::PointerUIBase_c* create() {
            return il2cpp::create_object<app::PointerUIBase_c>(get_class());
        }
    } // namespace PointerUIBase_c
} // namespace app::classes::types
