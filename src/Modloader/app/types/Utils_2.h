#pragma once
#include <Modloader/app/structs/Utils_2.h>
#include <Modloader/app/structs/Utils_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Utils_2 {
        inline app::Utils_2__Class** type_info() {
            static app::Utils_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Utils_2__Class**)(modloader::win::memory::resolve_rva(0x047372D0));
            }
            return cache;
        }
        inline app::Utils_2__Class* get_class() {
            return il2cpp::get_class<app::Utils_2__Class>(type_info(), "", "Utils");
        }
        inline app::Utils_2* create() {
            return il2cpp::create_object<app::Utils_2>(get_class());
        }
    } // namespace Utils_2
} // namespace app::classes::types
