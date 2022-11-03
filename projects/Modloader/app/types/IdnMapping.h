#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IdnMapping {
        inline app::IdnMapping__Class** type_info = (app::IdnMapping__Class**)(modloader::win::memory::resolve_rva(0x0477CD48));
        inline app::IdnMapping__Class* get_class() {
            return il2cpp::get_class<app::IdnMapping__Class>(type_info, "System.Globalization", "IdnMapping");
        }
        inline app::IdnMapping* create() {
            return il2cpp::create_object<app::IdnMapping>(get_class());
        }
    } // namespace IdnMapping
} // namespace app::classes::types
