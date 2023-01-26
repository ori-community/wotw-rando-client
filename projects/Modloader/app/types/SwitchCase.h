#pragma once
#include <Modloader/app/structs/SwitchCase.h>
#include <Modloader/app/structs/SwitchCase__Array.h>
#include <Modloader/app/structs/SwitchCase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SwitchCase {
        inline app::SwitchCase__Class** type_info() {
            static app::SwitchCase__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SwitchCase__Class**)(modloader::win::memory::resolve_rva(0x04798BC0));
            }
            return cache;
        }
        inline app::SwitchCase__Class* get_class() {
            return il2cpp::get_class<app::SwitchCase__Class>(type_info(), "System.Linq.Expressions", "SwitchCase");
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
