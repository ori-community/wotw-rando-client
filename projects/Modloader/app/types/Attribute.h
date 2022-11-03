#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Attribute {
        inline app::Attribute__Class** type_info = (app::Attribute__Class**)(modloader::win::memory::resolve_rva(0x0475ECE8));
        inline app::Attribute__Class* get_class() {
            return il2cpp::get_class<app::Attribute__Class>(type_info, "System", "Attribute");
        }
        inline app::Attribute* create() {
            return il2cpp::create_object<app::Attribute>(get_class());
        }
        inline app::Attribute__Array* create_array(int size) {
            return il2cpp::array_new<app::Attribute__Array>(get_class(), size);
        }
        inline app::Attribute__Array* create_array(const std::vector<app::Attribute*>& items) {
            return il2cpp::array_new<app::Attribute__Array>(get_class(), items);
        }
    } // namespace Attribute
} // namespace app::classes::types
