#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ServerTriggeredActionData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ServerTriggeredActionData__Class** type_info;
        inline app::ServerTriggeredActionData__Class* get_class() {
            return il2cpp::get_class<app::ServerTriggeredActionData__Class>(type_info, "", "ServerTriggeredActionData");
        }
        inline app::ServerTriggeredActionData* create() {
            return il2cpp::create_object<app::ServerTriggeredActionData>(get_class());
        }
        inline app::ServerTriggeredActionData__Array* create_array(int size) {
            return il2cpp::array_new<app::ServerTriggeredActionData__Array>(get_class(), size);
        }
    } // namespace ServerTriggeredActionData
} // namespace app::classes::types
