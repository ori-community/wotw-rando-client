#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Datatype_boolean {
        inline app::Datatype_boolean__Class** type_info = (app::Datatype_boolean__Class**)(modloader::win::memory::resolve_rva(0x047508E0));
        inline app::Datatype_boolean__Class* get_class() {
            return il2cpp::get_class<app::Datatype_boolean__Class>(type_info, "System.Xml.Schema", "Datatype_boolean");
        }
        inline app::Datatype_boolean* create() {
            return il2cpp::create_object<app::Datatype_boolean>(get_class());
        }
    } // namespace Datatype_boolean
} // namespace app::classes::types
