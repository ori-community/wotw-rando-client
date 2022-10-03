#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CADMethodRef {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CADMethodRef__Class** type_info;
        inline app::CADMethodRef__Class* get_class() {
            return il2cpp::get_class<app::CADMethodRef__Class>(type_info, "System.Runtime.Remoting.Messaging", "CADMethodRef");
        }
        inline app::CADMethodRef* create() {
            return il2cpp::create_object<app::CADMethodRef>(get_class());
        }
    } // namespace CADMethodRef
} // namespace app::classes::types
