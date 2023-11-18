#pragma once
#include <Modloader/app/structs/CultureNotFoundException.h>
#include <Modloader/app/structs/CultureNotFoundException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CultureNotFoundException {
        inline app::CultureNotFoundException__Class** type_info() {
            static app::CultureNotFoundException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CultureNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x04780A78));
            }
            return cache;
        }
        inline app::CultureNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::CultureNotFoundException__Class>(type_info(), "System.Globalization", "CultureNotFoundException");
        }
        inline app::CultureNotFoundException* create() {
            return il2cpp::create_object<app::CultureNotFoundException>(get_class());
        }
    } // namespace CultureNotFoundException
} // namespace app::classes::types
