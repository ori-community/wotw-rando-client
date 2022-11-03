#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace XSDSchema {
        inline app::XSDSchema__Class** type_info = (app::XSDSchema__Class**)(modloader::win::memory::resolve_rva(0x0476A1C8));
        inline app::XSDSchema__Class* get_class() {
            return il2cpp::get_class<app::XSDSchema__Class>(type_info, "System.Data", "XSDSchema");
        }
        inline app::XSDSchema* create() {
            return il2cpp::create_object<app::XSDSchema>(get_class());
        }
    } // namespace XSDSchema
} // namespace app::classes::types
