#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Guid {
        inline app::Guid__Class** type_info = (app::Guid__Class**)(modloader::win::memory::resolve_rva(0x0474ABA0));
        inline app::Guid__Class* get_class() {
            return il2cpp::get_class<app::Guid__Class>(type_info, "System", "Guid");
        }
        inline app::Guid* create() {
            return il2cpp::create_object<app::Guid>(get_class());
        }
        inline app::Guid__Boxed* box(app::Guid value) {
            return il2cpp::box_value<app::Guid__Boxed>(get_class(), value);
        }
        inline app::Guid__Array* create_array(int size) {
            return il2cpp::array_new<app::Guid__Array>(get_class(), size);
        }
        inline app::Guid__Array* create_array(const std::vector<app::Guid>& items) {
            return il2cpp::array_new<app::Guid__Array>(get_class(), items);
        }
    } // namespace Guid
} // namespace app::classes::types
