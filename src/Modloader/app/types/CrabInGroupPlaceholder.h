#pragma once
#include <Modloader/app/structs/CrabInGroupPlaceholder.h>
#include <Modloader/app/structs/CrabInGroupPlaceholder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CrabInGroupPlaceholder {
        inline app::CrabInGroupPlaceholder__Class** type_info() {
            static app::CrabInGroupPlaceholder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CrabInGroupPlaceholder__Class**)(modloader::win::memory::resolve_rva(0x0470C218));
            }
            return cache;
        }
        inline app::CrabInGroupPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CrabInGroupPlaceholder__Class>(type_info(), "", "CrabInGroupPlaceholder");
        }
        inline app::CrabInGroupPlaceholder* create() {
            return il2cpp::create_object<app::CrabInGroupPlaceholder>(get_class());
        }
    } // namespace CrabInGroupPlaceholder
} // namespace app::classes::types
