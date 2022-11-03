#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntityAvatar {
        inline app::EntityAvatar__Class** type_info = (app::EntityAvatar__Class**)(modloader::win::memory::resolve_rva(0x0470F660));
        inline app::EntityAvatar__Class* get_class() {
            return il2cpp::get_class<app::EntityAvatar__Class>(type_info, "", "EntityAvatar");
        }
        inline app::EntityAvatar* create() {
            return il2cpp::create_object<app::EntityAvatar>(get_class());
        }
    } // namespace EntityAvatar
} // namespace app::classes::types
