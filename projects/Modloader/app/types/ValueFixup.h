#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ValueFixup {
        inline app::ValueFixup__Class** type_info = (app::ValueFixup__Class**)(modloader::win::memory::resolve_rva(0x047886D8));
        inline app::ValueFixup__Class* get_class() {
            return il2cpp::get_class<app::ValueFixup__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "ValueFixup");
        }
        inline app::ValueFixup* create() {
            return il2cpp::create_object<app::ValueFixup>(get_class());
        }
    } // namespace ValueFixup
} // namespace app::classes::types
