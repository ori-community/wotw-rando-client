#pragma once
#include <Modloader/app/structs/BigInteger_1.h>
#include <Modloader/app/structs/BigInteger_1__Array.h>
#include <Modloader/app/structs/BigInteger_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BigInteger_1 {
        inline app::BigInteger_1__Class** type_info() {
            static app::BigInteger_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BigInteger_1__Class**)(modloader::win::memory::resolve_rva(0x04741398));
            }
            return cache;
        }
        inline app::BigInteger_1__Class* get_class() {
            return il2cpp::get_class<app::BigInteger_1__Class>(type_info(), "Mono.Math", "BigInteger");
        }
        inline app::BigInteger_1* create() {
            return il2cpp::create_object<app::BigInteger_1>(get_class());
        }
        inline app::BigInteger_1__Array* create_array(int size) {
            return il2cpp::array_new<app::BigInteger_1__Array>(get_class(), size);
        }
        inline app::BigInteger_1__Array* create_array(const std::vector<app::BigInteger_1*>& items) {
            return il2cpp::array_new<app::BigInteger_1__Array>(get_class(), items);
        }
    } // namespace BigInteger_1
} // namespace app::classes::types
