#pragma once
#include <Modloader/app/structs/MortarPlaceholder.h>
#include <Modloader/app/structs/MortarPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MortarPlaceholder {
        inline app::MortarPlaceholder__Class** type_info() {
            static app::MortarPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MortarPlaceholder__Class**)(modloader::win::memory::resolve_rva(0x0474C160));
            }
            return cache;
        }
        inline app::MortarPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::MortarPlaceholder__Class>(type_info(), "", "MortarPlaceholder");
        }
        inline app::MortarPlaceholder* create() {
            return il2cpp::create_object<app::MortarPlaceholder>(get_class());
        }
    } // namespace MortarPlaceholder
} // namespace app::classes::types
