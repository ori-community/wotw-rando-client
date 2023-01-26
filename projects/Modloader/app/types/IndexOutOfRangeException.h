#pragma once
#include <Modloader/app/structs/IndexOutOfRangeException.h>
#include <Modloader/app/structs/IndexOutOfRangeException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IndexOutOfRangeException {
        inline app::IndexOutOfRangeException__Class** type_info() {
            static app::IndexOutOfRangeException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IndexOutOfRangeException__Class**)(modloader::win::memory::resolve_rva(0x0477D428));
            }
            return cache;
        }
        inline app::IndexOutOfRangeException__Class* get_class() {
            return il2cpp::get_class<app::IndexOutOfRangeException__Class>(type_info(), "System", "IndexOutOfRangeException");
        }
        inline app::IndexOutOfRangeException* create() {
            return il2cpp::create_object<app::IndexOutOfRangeException>(get_class());
        }
    } // namespace IndexOutOfRangeException
} // namespace app::classes::types
