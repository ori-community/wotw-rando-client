#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JobMode__Enum {
        inline app::JobMode__Enum__Class** type_info = (app::JobMode__Enum__Class**)(modloader::win::memory::resolve_rva(0x0478B3B8));
        inline app::JobMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::JobMode__Enum__Class>(type_info, "Moon.Jobs", "JobMode");
        }
        inline app::JobMode__Enum* create() {
            return il2cpp::create_object<app::JobMode__Enum>(get_class());
        }
        inline app::JobMode__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::JobMode__Enum__Array>(get_class(), size);
        }
        inline app::JobMode__Enum__Array* create_array(const std::vector<app::JobMode__Enum*>& items) {
            return il2cpp::array_new<app::JobMode__Enum__Array>(get_class(), items);
        }
    } // namespace JobMode__Enum
} // namespace app::classes::types
