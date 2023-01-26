#pragma once
#include <Modloader/app/structs/Datatype_boolean.h>
#include <Modloader/app/structs/Datatype_boolean__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Datatype_boolean {
        inline app::Datatype_boolean__Class** type_info() {
            static app::Datatype_boolean__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Datatype_boolean__Class**)(modloader::win::memory::resolve_rva(0x047508E0));
            }
            return cache;
        }
        inline app::Datatype_boolean__Class* get_class() {
            return il2cpp::get_class<app::Datatype_boolean__Class>(type_info(), "System.Xml.Schema", "Datatype_boolean");
        }
        inline app::Datatype_boolean* create() {
            return il2cpp::create_object<app::Datatype_boolean>(get_class());
        }
    } // namespace Datatype_boolean
} // namespace app::classes::types
