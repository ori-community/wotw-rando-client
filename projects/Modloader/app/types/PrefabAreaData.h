#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PrefabAreaData__Class.h>
#include <Modloader/app/structs/PrefabAreaData.h>
#include <Modloader/app/structs/PrefabAreaData__Array.h>

namespace app::classes::types {
    namespace PrefabAreaData {
        inline app::PrefabAreaData__Class** type_info = (app::PrefabAreaData__Class**)(modloader::win::memory::resolve_rva(0x0470ACD8));
        inline app::PrefabAreaData__Class* get_class() {
            return il2cpp::get_class<app::PrefabAreaData__Class>(type_info, "", "PrefabAreaData");
        }
        inline app::PrefabAreaData* create() {
            return il2cpp::create_object<app::PrefabAreaData>(get_class());
        }
        inline app::PrefabAreaData__Array* create_array(int size) {
            return il2cpp::array_new<app::PrefabAreaData__Array>(get_class(), size);
        }
        inline app::PrefabAreaData__Array* create_array(const std::vector<app::PrefabAreaData*>& items) {
            return il2cpp::array_new<app::PrefabAreaData__Array>(get_class(), items);
        }
    } // namespace PrefabAreaData
} // namespace app::classes::types
