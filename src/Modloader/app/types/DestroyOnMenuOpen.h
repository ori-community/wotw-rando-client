#pragma once
#include <Modloader/app/structs/DestroyOnMenuOpen.h>
#include <Modloader/app/structs/DestroyOnMenuOpen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DestroyOnMenuOpen {
        inline app::DestroyOnMenuOpen__Class** type_info() {
            static app::DestroyOnMenuOpen__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DestroyOnMenuOpen__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DestroyOnMenuOpen__Class* get_class() {
            return il2cpp::get_class<app::DestroyOnMenuOpen__Class>(type_info(), "", "DestroyOnMenuOpen");
        }
        inline app::DestroyOnMenuOpen* create() {
            return il2cpp::create_object<app::DestroyOnMenuOpen>(get_class());
        }
    } // namespace DestroyOnMenuOpen
} // namespace app::classes::types
