#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CollectablePlaceholder_c__Class.h>
#include <Modloader/app/structs/CollectablePlaceholder_c.h>

namespace app::classes::types {
    namespace CollectablePlaceholder_c {
        inline app::CollectablePlaceholder_c__Class** type_info = (app::CollectablePlaceholder_c__Class**)(modloader::win::memory::resolve_rva(0x04795B40));
        inline app::CollectablePlaceholder_c__Class* get_class() {
            return il2cpp::get_nested_class<app::CollectablePlaceholder_c__Class>(type_info, "", "CollectablePlaceholder", "<>c");
        }
        inline app::CollectablePlaceholder_c* create() {
            return il2cpp::create_object<app::CollectablePlaceholder_c>(get_class());
        }
    } // namespace CollectablePlaceholder_c
} // namespace app::classes::types
