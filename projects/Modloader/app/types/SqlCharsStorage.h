#pragma once
#include <Modloader/app/structs/SqlCharsStorage.h>
#include <Modloader/app/structs/SqlCharsStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlCharsStorage {
        inline app::SqlCharsStorage__Class** type_info() {
            static app::SqlCharsStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlCharsStorage__Class**)(modloader::win::memory::resolve_rva(0x04734758));
            }
            return cache;
        }
        inline app::SqlCharsStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlCharsStorage__Class>(type_info(), "System.Data.Common", "SqlCharsStorage");
        }
        inline app::SqlCharsStorage* create() {
            return il2cpp::create_object<app::SqlCharsStorage>(get_class());
        }
    } // namespace SqlCharsStorage
} // namespace app::classes::types
