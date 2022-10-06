#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RuntimeEventInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RuntimeEventInfo__Class** type_info;
        inline app::RuntimeEventInfo__Class* get_class() {
            return il2cpp::get_class<app::RuntimeEventInfo__Class>(type_info, "System.Reflection", "RuntimeEventInfo");
        }
        inline app::RuntimeEventInfo* create() {
            return il2cpp::create_object<app::RuntimeEventInfo>(get_class());
        }
        inline app::RuntimeEventInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::RuntimeEventInfo__Array>(get_class(), size);
        }
        inline app::RuntimeEventInfo__Array* create_array(const std::vector<app::RuntimeEventInfo*>& items) {
            return il2cpp::array_new<app::RuntimeEventInfo__Array>(get_class(), items);
        }
    } // namespace RuntimeEventInfo
} // namespace app::classes::types
