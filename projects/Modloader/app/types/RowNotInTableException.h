#pragma once
#include <Modloader/app/structs/RowNotInTableException.h>
#include <Modloader/app/structs/RowNotInTableException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RowNotInTableException {
        inline app::RowNotInTableException__Class** type_info() {
            static app::RowNotInTableException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RowNotInTableException__Class**)(modloader::win::memory::resolve_rva(0x0476BDB0));
            }
            return cache;
        }
        inline app::RowNotInTableException__Class* get_class() {
            return il2cpp::get_class<app::RowNotInTableException__Class>(type_info(), "System.Data", "RowNotInTableException");
        }
        inline app::RowNotInTableException* create() {
            return il2cpp::create_object<app::RowNotInTableException>(get_class());
        }
    } // namespace RowNotInTableException
} // namespace app::classes::types
