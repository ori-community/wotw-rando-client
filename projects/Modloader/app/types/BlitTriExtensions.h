#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BlitTriExtensions {
        inline app::BlitTriExtensions__Class** type_info = (app::BlitTriExtensions__Class**)(modloader::win::memory::resolve_rva(0x0471F510));
        inline app::BlitTriExtensions__Class* get_class() {
            return il2cpp::get_class<app::BlitTriExtensions__Class>(type_info, "", "BlitTriExtensions");
        }
        inline app::BlitTriExtensions* create() {
            return il2cpp::create_object<app::BlitTriExtensions>(get_class());
        }
    } // namespace BlitTriExtensions
} // namespace app::classes::types
