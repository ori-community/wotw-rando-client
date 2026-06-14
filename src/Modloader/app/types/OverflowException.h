#pragma once
#include <Modloader/app/structs/OverflowException.h>
#include <Modloader/app/structs/OverflowException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OverflowException {
        inline app::OverflowException__Class** type_info() {
            static app::OverflowException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OverflowException__Class**)(modloader::win::memory::resolve_rva(0x0477B5D8));
            }
            return cache;
        }
        inline app::OverflowException__Class* get_class() {
            return il2cpp::get_class<app::OverflowException__Class>(type_info(), "System", "OverflowException");
        }
        inline app::OverflowException* create() {
            return il2cpp::create_object<app::OverflowException>(get_class());
        }
    } // namespace OverflowException
} // namespace app::classes::types
