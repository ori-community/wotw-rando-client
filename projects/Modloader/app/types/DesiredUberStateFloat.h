#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DesiredUberStateFloat__Class.h>
#include <Modloader/app/structs/DesiredUberStateFloat.h>
#include <Modloader/app/structs/DesiredUberStateFloat__Array.h>

namespace app::classes::types {
    namespace DesiredUberStateFloat {
        inline app::DesiredUberStateFloat__Class** type_info = (app::DesiredUberStateFloat__Class**)(modloader::win::memory::resolve_rva(0x04777670));
        inline app::DesiredUberStateFloat__Class* get_class() {
            return il2cpp::get_class<app::DesiredUberStateFloat__Class>(type_info, "", "DesiredUberStateFloat");
        }
        inline app::DesiredUberStateFloat* create() {
            return il2cpp::create_object<app::DesiredUberStateFloat>(get_class());
        }
        inline app::DesiredUberStateFloat__Array* create_array(int size) {
            return il2cpp::array_new<app::DesiredUberStateFloat__Array>(get_class(), size);
        }
        inline app::DesiredUberStateFloat__Array* create_array(const std::vector<app::DesiredUberStateFloat*>& items) {
            return il2cpp::array_new<app::DesiredUberStateFloat__Array>(get_class(), items);
        }
    } // namespace DesiredUberStateFloat
} // namespace app::classes::types
