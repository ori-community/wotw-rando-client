#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CollectionChangeEventArgs__Class.h>
#include <Modloader/app/structs/CollectionChangeEventArgs.h>

namespace app::classes::types {
    namespace CollectionChangeEventArgs {
        inline app::CollectionChangeEventArgs__Class** type_info = (app::CollectionChangeEventArgs__Class**)(modloader::win::memory::resolve_rva(0x047348F0));
        inline app::CollectionChangeEventArgs__Class* get_class() {
            return il2cpp::get_class<app::CollectionChangeEventArgs__Class>(type_info, "System.ComponentModel", "CollectionChangeEventArgs");
        }
        inline app::CollectionChangeEventArgs* create() {
            return il2cpp::create_object<app::CollectionChangeEventArgs>(get_class());
        }
    } // namespace CollectionChangeEventArgs
} // namespace app::classes::types
