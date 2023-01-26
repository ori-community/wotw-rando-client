#pragma once
#include <Modloader/app/structs/BigInteger_1__Array.h>
#include <Modloader/app/structs/BigInteger_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BigInteger_1__Array {
        inline app::BigInteger_1__Array__Class** type_info() {
            static app::BigInteger_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BigInteger_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04766DA8));
            }
            return cache;
        }
        inline app::BigInteger_1__Array__Class* get_class() {
            return il2cpp::get_class<app::BigInteger_1__Array__Class>(type_info(), "Mono.Math", "BigInteger[]");
        }
        inline app::BigInteger_1__Array* create() {
            return il2cpp::create_object<app::BigInteger_1__Array>(get_class());
        }
    } // namespace BigInteger_1__Array
} // namespace app::classes::types
