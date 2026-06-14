#pragma once
#include <Modloader/app/structs/DataException.h>
#include <Modloader/app/structs/DataException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataException {
        inline app::DataException__Class** type_info() {
            static app::DataException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataException__Class**)(modloader::win::memory::resolve_rva(0x0477E9D0));
            }
            return cache;
        }
        inline app::DataException__Class* get_class() {
            return il2cpp::get_class<app::DataException__Class>(type_info(), "System.Data", "DataException");
        }
        inline app::DataException* create() {
            return il2cpp::create_object<app::DataException>(get_class());
        }
    } // namespace DataException
} // namespace app::classes::types
