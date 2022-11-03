#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Reaction {
        inline app::Reaction__Class** type_info = (app::Reaction__Class**)(modloader::win::memory::resolve_rva(0x0474B000));
        inline app::Reaction__Class* get_class() {
            return il2cpp::get_class<app::Reaction__Class>(type_info, "Moon.Timeline", "Reaction");
        }
        inline app::Reaction* create() {
            return il2cpp::create_object<app::Reaction>(get_class());
        }
        inline app::Reaction__Boxed* box(app::Reaction value) {
            return il2cpp::box_value<app::Reaction__Boxed>(get_class(), value);
        }
        inline app::Reaction__Array* create_array(int size) {
            return il2cpp::array_new<app::Reaction__Array>(get_class(), size);
        }
        inline app::Reaction__Array* create_array(const std::vector<app::Reaction>& items) {
            return il2cpp::array_new<app::Reaction__Array>(get_class(), items);
        }
    } // namespace Reaction
} // namespace app::classes::types
