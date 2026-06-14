#pragma once
#include <Modloader/app/structs/BigInteger_2__Array.h>
#include <Modloader/app/structs/BigInteger_2__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BigInteger_2__Array {
        inline app::BigInteger_2__Array__Class** type_info() {
            static app::BigInteger_2__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BigInteger_2__Array__Class**)(modloader::win::memory::resolve_rva(0x047495A8));
            }
            return cache;
        }
        inline app::BigInteger_2__Array__Class* get_class() {
            return il2cpp::get_class<app::BigInteger_2__Array__Class>(type_info(), "System.Numerics", "BigInteger[]");
        }
        inline app::BigInteger_2__Array* create() {
            return il2cpp::create_object<app::BigInteger_2__Array>(get_class());
        }
    } // namespace BigInteger_2__Array
} // namespace app::classes::types
