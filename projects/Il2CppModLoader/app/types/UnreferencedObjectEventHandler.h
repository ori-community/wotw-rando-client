#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnreferencedObjectEventHandler {
        namespace {
            inline app::UnreferencedObjectEventHandler__Class* type_info_ref = nullptr;
        }
        inline app::UnreferencedObjectEventHandler__Class** type_info = &type_info_ref;
        inline app::UnreferencedObjectEventHandler__Class* get_class() {
            return il2cpp::get_class<app::UnreferencedObjectEventHandler__Class>(type_info, "System.Xml.Serialization", "UnreferencedObjectEventHandler");
        }
        inline app::UnreferencedObjectEventHandler* create() {
            return il2cpp::create_object<app::UnreferencedObjectEventHandler>(get_class());
        }
    } // namespace UnreferencedObjectEventHandler
} // namespace app::classes::types
