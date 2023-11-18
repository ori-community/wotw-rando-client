#pragma once
#include <Modloader/app/structs/DataError.h>
#include <Modloader/app/structs/DataError__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataError {
        inline app::DataError__Class** type_info() {
            static app::DataError__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataError__Class**)(modloader::win::memory::resolve_rva(0x0475BAD8));
            }
            return cache;
        }
        inline app::DataError__Class* get_class() {
            return il2cpp::get_class<app::DataError__Class>(type_info(), "System.Data", "DataError");
        }
        inline app::DataError* create() {
            return il2cpp::create_object<app::DataError>(get_class());
        }
    } // namespace DataError
} // namespace app::classes::types
