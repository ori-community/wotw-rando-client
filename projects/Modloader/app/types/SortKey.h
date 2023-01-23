#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SortKey__Class.h>
#include <Modloader/app/structs/SortKey.h>

namespace app::classes::types {
    namespace SortKey {
        inline app::SortKey__Class** type_info = (app::SortKey__Class**)(modloader::win::memory::resolve_rva(0x047136A8));
        inline app::SortKey__Class* get_class() {
            return il2cpp::get_class<app::SortKey__Class>(type_info, "System.Globalization", "SortKey");
        }
        inline app::SortKey* create() {
            return il2cpp::create_object<app::SortKey>(get_class());
        }
    } // namespace SortKey
} // namespace app::classes::types
