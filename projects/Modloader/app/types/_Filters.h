#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace _Filters {
        inline app::_Filters__Class** type_info = (app::_Filters__Class**)(modloader::win::memory::resolve_rva(0x04774760));
        inline app::_Filters__Class* get_class() {
            return il2cpp::get_class<app::_Filters__Class>(type_info, "System", "__Filters");
        }
        inline app::_Filters* create() {
            return il2cpp::create_object<app::_Filters>(get_class());
        }
    } // namespace _Filters
} // namespace app::classes::types
