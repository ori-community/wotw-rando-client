#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Position {
        inline app::Position__Class** type_info = (app::Position__Class**)(modloader::win::memory::resolve_rva(0x04754DF8));
        inline app::Position__Class* get_class() {
            return il2cpp::get_class<app::Position__Class>(type_info, "System.Xml.Schema", "Position");
        }
        inline app::Position* create() {
            return il2cpp::create_object<app::Position>(get_class());
        }
        inline app::Position__Boxed* box(app::Position value) {
            return il2cpp::box_value<app::Position__Boxed>(get_class(), value);
        }
    } // namespace Position
} // namespace app::classes::types
