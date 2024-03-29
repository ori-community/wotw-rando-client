#pragma once
#include <Modloader/app/structs/EntityAvatar.h>
#include <Modloader/app/structs/EntityAvatar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EntityAvatar {
        inline app::EntityAvatar__Class** type_info() {
            static app::EntityAvatar__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EntityAvatar__Class**)(modloader::win::memory::resolve_rva(0x0470F660));
            }
            return cache;
        }
        inline app::EntityAvatar__Class* get_class() {
            return il2cpp::get_class<app::EntityAvatar__Class>(type_info(), "", "EntityAvatar");
        }
        inline app::EntityAvatar* create() {
            return il2cpp::create_object<app::EntityAvatar>(get_class());
        }
    } // namespace EntityAvatar
} // namespace app::classes::types
