#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PrefabAreaData__Array__Class.h>
#include <Modloader/app/structs/PrefabAreaData__Array.h>

namespace app::classes::types {
    namespace PrefabAreaData__Array {
        inline app::PrefabAreaData__Array__Class** type_info = (app::PrefabAreaData__Array__Class**)(modloader::win::memory::resolve_rva(0x0478DD60));
        inline app::PrefabAreaData__Array__Class* get_class() {
            return il2cpp::get_class<app::PrefabAreaData__Array__Class>(type_info, "", "PrefabAreaData[]");
        }
        inline app::PrefabAreaData__Array* create() {
            return il2cpp::create_object<app::PrefabAreaData__Array>(get_class());
        }
    } // namespace PrefabAreaData__Array
} // namespace app::classes::types
