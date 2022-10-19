#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace WriteObjectInfo {
        inline app::WriteObjectInfo__Class** type_info = (app::WriteObjectInfo__Class**)(modloader::win::memory::resolve_rva(0x04794C60));
        inline app::WriteObjectInfo__Class* get_class() {
            return il2cpp::get_class<app::WriteObjectInfo__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "WriteObjectInfo");
        }
        inline app::WriteObjectInfo* create() {
            return il2cpp::create_object<app::WriteObjectInfo>(get_class());
        }
        inline app::WriteObjectInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::WriteObjectInfo__Array>(get_class(), size);
        }
        inline app::WriteObjectInfo__Array* create_array(const std::vector<app::WriteObjectInfo*>& items) {
            return il2cpp::array_new<app::WriteObjectInfo__Array>(get_class(), items);
        }
    } // namespace WriteObjectInfo
} // namespace app::classes::types
