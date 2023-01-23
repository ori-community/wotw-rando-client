#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Datatype_boolean__Class.h>
#include <Modloader/app/structs/Datatype_boolean.h>

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
