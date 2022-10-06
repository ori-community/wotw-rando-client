#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerObject {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerObject__Class** type_info;
        inline app::ServerObject__Class* get_class() {
            return il2cpp::get_class<app::ServerObject__Class>(type_info, "", "ServerObject");
        }
        inline app::ServerObject* create() {
            return il2cpp::create_object<app::ServerObject>(get_class());
        }
        inline app::ServerObject__Array* create_array(int size) {
            return il2cpp::array_new<app::ServerObject__Array>(get_class(), size);
        }
        inline app::ServerObject__Array* create_array(const std::vector<app::ServerObject*>& items) {
            return il2cpp::array_new<app::ServerObject__Array>(get_class(), items);
        }
    } // namespace ServerObject
} // namespace app::classes::types
