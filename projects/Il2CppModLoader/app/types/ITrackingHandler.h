#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITrackingHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITrackingHandler__Class** type_info;
        inline app::ITrackingHandler__Class* get_class() {
            return il2cpp::get_class<app::ITrackingHandler__Class>(type_info, "System.Runtime.Remoting.Services", "ITrackingHandler");
        }
        inline app::ITrackingHandler* create() {
            return il2cpp::create_object<app::ITrackingHandler>(get_class());
        }
        inline app::ITrackingHandler__Array* create_array(int size) {
            return il2cpp::array_new<app::ITrackingHandler__Array>(get_class(), size);
        }
    } // namespace ITrackingHandler
} // namespace app::classes::types
