#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CADMessageBase {
        namespace {
            inline app::CADMessageBase__Class* type_info_ref = nullptr;
        }
        inline app::CADMessageBase__Class** type_info = &type_info_ref;
        inline app::CADMessageBase__Class* get_class() {
            return il2cpp::get_class<app::CADMessageBase__Class>(type_info, "System.Runtime.Remoting.Messaging", "CADMessageBase");
        }
        inline app::CADMessageBase* create() {
            return il2cpp::create_object<app::CADMessageBase>(get_class());
        }
    } // namespace CADMessageBase
} // namespace app::classes::types
