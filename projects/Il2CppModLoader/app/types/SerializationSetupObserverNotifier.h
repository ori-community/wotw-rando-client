#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SerializationSetupObserverNotifier {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SerializationSetupObserverNotifier__Class** type_info;
        inline app::SerializationSetupObserverNotifier__Class* get_class() {
            return il2cpp::get_class<app::SerializationSetupObserverNotifier__Class>(type_info, "", "SerializationSetupObserverNotifier");
        }
        inline app::SerializationSetupObserverNotifier* create() {
            return il2cpp::create_object<app::SerializationSetupObserverNotifier>(get_class());
        }
    } // namespace SerializationSetupObserverNotifier
} // namespace app::classes::types
