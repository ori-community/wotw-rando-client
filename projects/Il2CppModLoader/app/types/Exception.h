#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Exception {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Exception__Class** type_info;
        inline app::Exception__Class* get_class() {
            return il2cpp::get_class<app::Exception__Class>(type_info, "System", "Exception");
        }
        inline app::Exception* create() {
            return il2cpp::create_object<app::Exception>(get_class());
        }
        inline app::Exception__Array* create_array(int size) {
            return il2cpp::array_new<app::Exception__Array>(get_class(), size);
        }
        inline app::Exception__Array* create_array(const std::vector<app::Exception*>& items) {
            return il2cpp::array_new<app::Exception__Array>(get_class(), items);
        }
    } // namespace Exception
} // namespace app::classes::types
