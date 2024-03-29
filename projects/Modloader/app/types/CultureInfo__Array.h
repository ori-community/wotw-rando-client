#pragma once
#include <Modloader/app/structs/CultureInfo__Array.h>
#include <Modloader/app/structs/CultureInfo__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CultureInfo__Array {
        inline app::CultureInfo__Array__Class** type_info() {
            static app::CultureInfo__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CultureInfo__Array__Class**)(modloader::win::memory::resolve_rva(0x0474A750));
            }
            return cache;
        }
        inline app::CultureInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::CultureInfo__Array__Class>(type_info(), "System.Globalization", "CultureInfo[]");
        }
        inline app::CultureInfo__Array* create() {
            return il2cpp::create_object<app::CultureInfo__Array>(get_class());
        }
    } // namespace CultureInfo__Array
} // namespace app::classes::types
