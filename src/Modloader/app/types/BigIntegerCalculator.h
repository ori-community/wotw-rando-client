#pragma once
#include <Modloader/app/structs/BigIntegerCalculator.h>
#include <Modloader/app/structs/BigIntegerCalculator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BigIntegerCalculator {
        inline app::BigIntegerCalculator__Class** type_info() {
            static app::BigIntegerCalculator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BigIntegerCalculator__Class**)(modloader::win::memory::resolve_rva(0x04755270));
            }
            return cache;
        }
        inline app::BigIntegerCalculator__Class* get_class() {
            return il2cpp::get_class<app::BigIntegerCalculator__Class>(type_info(), "System.Numerics", "BigIntegerCalculator");
        }
        inline app::BigIntegerCalculator* create() {
            return il2cpp::create_object<app::BigIntegerCalculator>(get_class());
        }
    } // namespace BigIntegerCalculator
} // namespace app::classes::types
