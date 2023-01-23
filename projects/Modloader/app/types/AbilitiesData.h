#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AbilitiesData__Class.h>
#include <Modloader/app/structs/AbilitiesData.h>
#include <Modloader/app/structs/AbilitiesData__Array.h>

namespace app::classes::types {
    namespace AbilitiesData {
        inline app::AbilitiesData__Class** type_info = (app::AbilitiesData__Class**)(modloader::win::memory::resolve_rva(0x0470DBF8));
        inline app::AbilitiesData__Class* get_class() {
            return il2cpp::get_class<app::AbilitiesData__Class>(type_info, "", "AbilitiesData");
        }
        inline app::AbilitiesData* create() {
            return il2cpp::create_object<app::AbilitiesData>(get_class());
        }
        inline app::AbilitiesData__Array* create_array(int size) {
            return il2cpp::array_new<app::AbilitiesData__Array>(get_class(), size);
        }
        inline app::AbilitiesData__Array* create_array(const std::vector<app::AbilitiesData*>& items) {
            return il2cpp::array_new<app::AbilitiesData__Array>(get_class(), items);
        }
    } // namespace AbilitiesData
} // namespace app::classes::types
