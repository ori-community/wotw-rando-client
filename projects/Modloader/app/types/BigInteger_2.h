#pragma once
#include <Modloader/app/structs/BigInteger_2.h>
#include <Modloader/app/structs/BigInteger_2__Array.h>
#include <Modloader/app/structs/BigInteger_2__Boxed.h>
#include <Modloader/app/structs/BigInteger_2__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BigInteger_2 {
        inline app::BigInteger_2__Class** type_info() {
            static app::BigInteger_2__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BigInteger_2__Class**)(modloader::win::memory::resolve_rva(0x04779B90));
            }
            return cache;
        }
        inline app::BigInteger_2__Class* get_class() {
            return il2cpp::get_class<app::BigInteger_2__Class>(type_info(), "System.Numerics", "BigInteger");
        }
        inline app::BigInteger_2* create() {
            return il2cpp::create_object<app::BigInteger_2>(get_class());
        }
        inline app::BigInteger_2__Boxed* box(app::BigInteger_2 value) {
            return il2cpp::box_value<app::BigInteger_2__Boxed>(get_class(), value);
        }
        inline app::BigInteger_2__Array* create_array(int size) {
            return il2cpp::array_new<app::BigInteger_2__Array>(get_class(), size);
        }
        inline app::BigInteger_2__Array* create_array(const std::vector<app::BigInteger_2>& items) {
            return il2cpp::array_new<app::BigInteger_2__Array>(get_class(), items);
        }
    } // namespace BigInteger_2
} // namespace app::classes::types
