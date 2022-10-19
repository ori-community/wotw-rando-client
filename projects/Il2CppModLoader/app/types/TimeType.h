#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace TimeType {
        inline app::TimeType__Class** type_info = (app::TimeType__Class**)(modloader::win::memory::resolve_rva(0x04748690));
        inline app::TimeType__Class* get_class() {
            return il2cpp::get_class<app::TimeType__Class>(type_info, "System", "TimeType");
        }
        inline app::TimeType* create() {
            return il2cpp::create_object<app::TimeType>(get_class());
        }
        inline app::TimeType__Array* create_array(int size) {
            return il2cpp::array_new<app::TimeType__Array>(get_class(), size);
        }
        inline app::TimeType__Array* create_array(const std::vector<app::TimeType*>& items) {
            return il2cpp::array_new<app::TimeType__Array>(get_class(), items);
        }
    } // namespace TimeType
} // namespace app::classes::types
