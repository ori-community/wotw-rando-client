#pragma once
#include <Modloader/app/structs/EraInfo__Array.h>
#include <Modloader/app/structs/EraInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EraInfo__Array {
        inline app::EraInfo__Array__Class** type_info() {
            static app::EraInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::EraInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0471EE18));
            }
            return cache;
        }
        inline app::EraInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::EraInfo__Array__Class>(type_info(), "System.Globalization", "EraInfo[]");
        }
        inline app::EraInfo__Array* create() {
            return il2cpp::create_object<app::EraInfo__Array>(get_class());
        }
    } // namespace EraInfo__Array
} // namespace app::classes::types
