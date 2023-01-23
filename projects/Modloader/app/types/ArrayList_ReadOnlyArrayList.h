#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ArrayList_ReadOnlyArrayList__Class.h>
#include <Modloader/app/structs/ArrayList_ReadOnlyArrayList.h>

namespace app::classes::types {
    namespace ArrayList_ReadOnlyArrayList {
        inline app::ArrayList_ReadOnlyArrayList__Class** type_info = (app::ArrayList_ReadOnlyArrayList__Class**)(modloader::win::memory::resolve_rva(0x0477C768));
        inline app::ArrayList_ReadOnlyArrayList__Class* get_class() {
            return il2cpp::get_nested_class<app::ArrayList_ReadOnlyArrayList__Class>(type_info, "System.Collections", "ArrayList", "ReadOnlyArrayList");
        }
        inline app::ArrayList_ReadOnlyArrayList* create() {
            return il2cpp::create_object<app::ArrayList_ReadOnlyArrayList>(get_class());
        }
    } // namespace ArrayList_ReadOnlyArrayList
} // namespace app::classes::types
