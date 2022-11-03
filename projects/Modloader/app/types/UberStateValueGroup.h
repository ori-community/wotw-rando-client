#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberStateValueGroup {
        inline app::UberStateValueGroup__Class** type_info = (app::UberStateValueGroup__Class**)(modloader::win::memory::resolve_rva(0x04730EA8));
        inline app::UberStateValueGroup__Class* get_class() {
            return il2cpp::get_class<app::UberStateValueGroup__Class>(type_info, "Moon", "UberStateValueGroup");
        }
        inline app::UberStateValueGroup* create() {
            return il2cpp::create_object<app::UberStateValueGroup>(get_class());
        }
        inline app::UberStateValueGroup__Array* create_array(int size) {
            return il2cpp::array_new<app::UberStateValueGroup__Array>(get_class(), size);
        }
        inline app::UberStateValueGroup__Array* create_array(const std::vector<app::UberStateValueGroup*>& items) {
            return il2cpp::array_new<app::UberStateValueGroup__Array>(get_class(), items);
        }
    } // namespace UberStateValueGroup
} // namespace app::classes::types
