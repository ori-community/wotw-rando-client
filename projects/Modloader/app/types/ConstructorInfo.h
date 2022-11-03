#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConstructorInfo {
        inline app::ConstructorInfo__Class** type_info = (app::ConstructorInfo__Class**)(modloader::win::memory::resolve_rva(0x0473B450));
        inline app::ConstructorInfo__Class* get_class() {
            return il2cpp::get_class<app::ConstructorInfo__Class>(type_info, "System.Reflection", "ConstructorInfo");
        }
        inline app::ConstructorInfo* create() {
            return il2cpp::create_object<app::ConstructorInfo>(get_class());
        }
        inline app::ConstructorInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::ConstructorInfo__Array>(get_class(), size);
        }
        inline app::ConstructorInfo__Array* create_array(const std::vector<app::ConstructorInfo*>& items) {
            return il2cpp::array_new<app::ConstructorInfo__Array>(get_class(), items);
        }
    } // namespace ConstructorInfo
} // namespace app::classes::types
