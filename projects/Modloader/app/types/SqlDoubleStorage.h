#pragma once
#include <Modloader/app/structs/SqlDoubleStorage.h>
#include <Modloader/app/structs/SqlDoubleStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlDoubleStorage {
        inline app::SqlDoubleStorage__Class** type_info() {
            static app::SqlDoubleStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlDoubleStorage__Class**)(modloader::win::memory::resolve_rva(0x0477FDD8));
            }
            return cache;
        }
        inline app::SqlDoubleStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlDoubleStorage__Class>(type_info(), "System.Data.Common", "SqlDoubleStorage");
        }
        inline app::SqlDoubleStorage* create() {
            return il2cpp::create_object<app::SqlDoubleStorage>(get_class());
        }
    } // namespace SqlDoubleStorage
} // namespace app::classes::types
