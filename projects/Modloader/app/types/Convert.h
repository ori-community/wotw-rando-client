#pragma once
#include <Modloader/app/structs/Convert.h>
#include <Modloader/app/structs/Convert__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Convert {
        inline app::Convert__Class** type_info() {
            static app::Convert__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Convert__Class**)(modloader::win::memory::resolve_rva(0x0472F068));
            }
            return cache;
        }
        inline app::Convert__Class* get_class() {
            return il2cpp::get_class<app::Convert__Class>(type_info(), "System", "Convert");
        }
        inline app::Convert* create() {
            return il2cpp::create_object<app::Convert>(get_class());
        }
    } // namespace Convert
} // namespace app::classes::types
