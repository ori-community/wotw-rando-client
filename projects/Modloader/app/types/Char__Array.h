#pragma once
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Char__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Char__Array {
        inline app::Char__Array__Class** type_info() {
            static app::Char__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Char__Array__Class**)(modloader::win::memory::resolve_rva(0x04745010));
            }
            return cache;
        }
        inline app::Char__Array__Class* get_class() {
            return il2cpp::get_class<app::Char__Array__Class>(type_info(), "System", "Char[]");
        }
        inline app::Char__Array* create() {
            return il2cpp::create_object<app::Char__Array>(get_class());
        }
    } // namespace Char__Array
} // namespace app::classes::types
