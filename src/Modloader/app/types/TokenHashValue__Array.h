#pragma once
#include <Modloader/app/structs/TokenHashValue__Array.h>
#include <Modloader/app/structs/TokenHashValue__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TokenHashValue__Array {
        inline app::TokenHashValue__Array__Class** type_info() {
            static app::TokenHashValue__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TokenHashValue__Array__Class**)(modloader::win::memory::resolve_rva(0x0473EF50));
            }
            return cache;
        }
        inline app::TokenHashValue__Array__Class* get_class() {
            return il2cpp::get_class<app::TokenHashValue__Array__Class>(type_info(), "System.Globalization", "TokenHashValue[]");
        }
        inline app::TokenHashValue__Array* create() {
            return il2cpp::create_object<app::TokenHashValue__Array>(get_class());
        }
    } // namespace TokenHashValue__Array
} // namespace app::classes::types
