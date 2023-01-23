#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SwitchCase__Class.h>
#include <Modloader/app/structs/SwitchCase.h>
#include <Modloader/app/structs/SwitchCase__Array.h>

namespace app::classes::types {
    namespace SwitchCase {
        inline app::SwitchCase__Class** type_info = (app::SwitchCase__Class**)(modloader::win::memory::resolve_rva(0x04798BC0));
        inline app::SwitchCase__Class* get_class() {
            return il2cpp::get_class<app::SwitchCase__Class>(type_info, "System.Linq.Expressions", "SwitchCase");
        }
        inline app::SwitchCase* create() {
            return il2cpp::create_object<app::SwitchCase>(get_class());
        }
        inline app::SwitchCase__Array* create_array(int size) {
            return il2cpp::array_new<app::SwitchCase__Array>(get_class(), size);
        }
        inline app::SwitchCase__Array* create_array(const std::vector<app::SwitchCase*>& items) {
            return il2cpp::array_new<app::SwitchCase__Array>(get_class(), items);
        }
    } // namespace SwitchCase
} // namespace app::classes::types
