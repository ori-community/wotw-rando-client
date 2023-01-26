#pragma once
#include <Modloader/app/structs/IdnMapping.h>
#include <Modloader/app/structs/IdnMapping__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IdnMapping {
        inline app::IdnMapping__Class** type_info() {
            static app::IdnMapping__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IdnMapping__Class**)(modloader::win::memory::resolve_rva(0x0477CD48));
            }
            return cache;
        }
        inline app::IdnMapping__Class* get_class() {
            return il2cpp::get_class<app::IdnMapping__Class>(type_info(), "System.Globalization", "IdnMapping");
        }
        inline app::IdnMapping* create() {
            return il2cpp::create_object<app::IdnMapping>(get_class());
        }
    } // namespace IdnMapping
} // namespace app::classes::types
