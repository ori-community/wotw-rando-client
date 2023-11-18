#pragma once
#include <Modloader/app/structs/ArrayTypeMismatchException.h>
#include <Modloader/app/structs/ArrayTypeMismatchException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ArrayTypeMismatchException {
        inline app::ArrayTypeMismatchException__Class** type_info() {
            static app::ArrayTypeMismatchException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ArrayTypeMismatchException__Class**)(modloader::win::memory::resolve_rva(0x04702608));
            }
            return cache;
        }
        inline app::ArrayTypeMismatchException__Class* get_class() {
            return il2cpp::get_class<app::ArrayTypeMismatchException__Class>(type_info(), "System", "ArrayTypeMismatchException");
        }
        inline app::ArrayTypeMismatchException* create() {
            return il2cpp::create_object<app::ArrayTypeMismatchException>(get_class());
        }
    } // namespace ArrayTypeMismatchException
} // namespace app::classes::types
