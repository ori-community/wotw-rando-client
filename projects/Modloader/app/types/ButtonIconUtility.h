#pragma once
#include <Modloader/app/structs/ButtonIconUtility.h>
#include <Modloader/app/structs/ButtonIconUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ButtonIconUtility {
        inline app::ButtonIconUtility__Class** type_info() {
            static app::ButtonIconUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ButtonIconUtility__Class**)(modloader::win::memory::resolve_rva(0x0475BC10));
            }
            return cache;
        }
        inline app::ButtonIconUtility__Class* get_class() {
            return il2cpp::get_class<app::ButtonIconUtility__Class>(type_info(), "", "ButtonIconUtility");
        }
        inline app::ButtonIconUtility* create() {
            return il2cpp::create_object<app::ButtonIconUtility>(get_class());
        }
    } // namespace ButtonIconUtility
} // namespace app::classes::types
