#pragma once
#include <Modloader/app/structs/HideWhenMainMenuOpen.h>
#include <Modloader/app/structs/HideWhenMainMenuOpen__Array.h>
#include <Modloader/app/structs/HideWhenMainMenuOpen__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HideWhenMainMenuOpen {
        inline app::HideWhenMainMenuOpen__Class** type_info() {
            static app::HideWhenMainMenuOpen__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HideWhenMainMenuOpen__Class**)(modloader::win::memory::resolve_rva(0x0477B100));
            }
            return cache;
        }
        inline app::HideWhenMainMenuOpen__Class* get_class() {
            return il2cpp::get_class<app::HideWhenMainMenuOpen__Class>(type_info(), "", "HideWhenMainMenuOpen");
        }
        inline app::HideWhenMainMenuOpen* create() {
            return il2cpp::create_object<app::HideWhenMainMenuOpen>(get_class());
        }
        inline app::HideWhenMainMenuOpen__Array* create_array(int size) {
            return il2cpp::array_new<app::HideWhenMainMenuOpen__Array>(get_class(), size);
        }
        inline app::HideWhenMainMenuOpen__Array* create_array(const std::vector<app::HideWhenMainMenuOpen*>& items) {
            return il2cpp::array_new<app::HideWhenMainMenuOpen__Array>(get_class(), items);
        }
    } // namespace HideWhenMainMenuOpen
} // namespace app::classes::types
