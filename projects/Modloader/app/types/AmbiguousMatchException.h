#pragma once
#include <Modloader/app/structs/AmbiguousMatchException.h>
#include <Modloader/app/structs/AmbiguousMatchException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AmbiguousMatchException {
        inline app::AmbiguousMatchException__Class** type_info() {
            static app::AmbiguousMatchException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AmbiguousMatchException__Class**)(modloader::win::memory::resolve_rva(0x0473F350));
            }
            return cache;
        }
        inline app::AmbiguousMatchException__Class* get_class() {
            return il2cpp::get_class<app::AmbiguousMatchException__Class>(type_info(), "System.Reflection", "AmbiguousMatchException");
        }
        inline app::AmbiguousMatchException* create() {
            return il2cpp::create_object<app::AmbiguousMatchException>(get_class());
        }
    } // namespace AmbiguousMatchException
} // namespace app::classes::types
