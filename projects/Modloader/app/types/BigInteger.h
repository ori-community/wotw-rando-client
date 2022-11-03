#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BigInteger {
        inline app::BigInteger__Class** type_info = (app::BigInteger__Class**)(modloader::win::memory::resolve_rva(0x0476C788));
        inline app::BigInteger__Class* get_class() {
            return il2cpp::get_class<app::BigInteger__Class>(type_info, "Mono.Math", "BigInteger");
        }
        inline app::BigInteger* create() {
            return il2cpp::create_object<app::BigInteger>(get_class());
        }
        inline app::BigInteger__Array* create_array(int size) {
            return il2cpp::array_new<app::BigInteger__Array>(get_class(), size);
        }
        inline app::BigInteger__Array* create_array(const std::vector<app::BigInteger*>& items) {
            return il2cpp::array_new<app::BigInteger__Array>(get_class(), items);
        }
    } // namespace BigInteger
} // namespace app::classes::types
