#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinInteraction_ThrownKeystone {
        inline app::SeinInteraction_ThrownKeystone__Class** type_info = (app::SeinInteraction_ThrownKeystone__Class**)(modloader::win::memory::resolve_rva(0x047734A8));
        inline app::SeinInteraction_ThrownKeystone__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinInteraction_ThrownKeystone__Class>(type_info, "", "SeinInteraction", "ThrownKeystone");
        }
        inline app::SeinInteraction_ThrownKeystone* create() {
            return il2cpp::create_object<app::SeinInteraction_ThrownKeystone>(get_class());
        }
        inline app::SeinInteraction_ThrownKeystone__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinInteraction_ThrownKeystone__Array>(get_class(), size);
        }
        inline app::SeinInteraction_ThrownKeystone__Array* create_array(const std::vector<app::SeinInteraction_ThrownKeystone*>& items) {
            return il2cpp::array_new<app::SeinInteraction_ThrownKeystone__Array>(get_class(), items);
        }
    } // namespace SeinInteraction_ThrownKeystone
} // namespace app::classes::types
