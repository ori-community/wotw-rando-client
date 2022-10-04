#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IConstructionCallMessage {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IConstructionCallMessage__Class** type_info;
        inline app::IConstructionCallMessage__Class* get_class() {
            return il2cpp::get_class<app::IConstructionCallMessage__Class>(type_info, "System.Runtime.Remoting.Activation", "IConstructionCallMessage");
        }
        inline app::IConstructionCallMessage* create() {
            return il2cpp::create_object<app::IConstructionCallMessage>(get_class());
        }
    } // namespace IConstructionCallMessage
} // namespace app::classes::types
