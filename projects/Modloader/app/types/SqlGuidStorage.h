#pragma once
#include <Modloader/app/structs/SqlGuidStorage.h>
#include <Modloader/app/structs/SqlGuidStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlGuidStorage {
        inline app::SqlGuidStorage__Class** type_info() {
            static app::SqlGuidStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlGuidStorage__Class**)(modloader::win::memory::resolve_rva(0x0470DFC0));
            }
            return cache;
        }
        inline app::SqlGuidStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlGuidStorage__Class>(type_info(), "System.Data.Common", "SqlGuidStorage");
        }
        inline app::SqlGuidStorage* create() {
            return il2cpp::create_object<app::SqlGuidStorage>(get_class());
        }
    } // namespace SqlGuidStorage
} // namespace app::classes::types
