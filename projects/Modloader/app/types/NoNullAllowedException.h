#pragma once
#include <Modloader/app/structs/NoNullAllowedException.h>
#include <Modloader/app/structs/NoNullAllowedException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NoNullAllowedException {
        inline app::NoNullAllowedException__Class** type_info() {
            static app::NoNullAllowedException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NoNullAllowedException__Class**)(modloader::win::memory::resolve_rva(0x047945A8));
            }
            return cache;
        }
        inline app::NoNullAllowedException__Class* get_class() {
            return il2cpp::get_class<app::NoNullAllowedException__Class>(type_info(), "System.Data", "NoNullAllowedException");
        }
        inline app::NoNullAllowedException* create() {
            return il2cpp::create_object<app::NoNullAllowedException>(get_class());
        }
    } // namespace NoNullAllowedException
} // namespace app::classes::types
