#pragma once
#include <Modloader/app/structs/ArithmeticException.h>
#include <Modloader/app/structs/ArithmeticException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArithmeticException {
        inline app::ArithmeticException__Class** type_info() {
            static app::ArithmeticException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArithmeticException__Class**)(modloader::win::memory::resolve_rva(0x047114A8));
            }
            return cache;
        }
        inline app::ArithmeticException__Class* get_class() {
            return il2cpp::get_class<app::ArithmeticException__Class>(type_info(), "System", "ArithmeticException");
        }
        inline app::ArithmeticException* create() {
            return il2cpp::create_object<app::ArithmeticException>(get_class());
        }
    } // namespace ArithmeticException
} // namespace app::classes::types
