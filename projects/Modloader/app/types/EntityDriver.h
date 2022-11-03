#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityDriver {
        inline app::EntityDriver__Class** type_info = (app::EntityDriver__Class**)(modloader::win::memory::resolve_rva(0x04760250));
        inline app::EntityDriver__Class* get_class() {
            return il2cpp::get_class<app::EntityDriver__Class>(type_info, "", "EntityDriver");
        }
        inline app::EntityDriver* create() {
            return il2cpp::create_object<app::EntityDriver>(get_class());
        }
    } // namespace EntityDriver
} // namespace app::classes::types
