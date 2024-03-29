#pragma once
#include <Modloader/app/structs/SqlUdtStorage.h>
#include <Modloader/app/structs/SqlUdtStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SqlUdtStorage {
        inline app::SqlUdtStorage__Class** type_info() {
            static app::SqlUdtStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SqlUdtStorage__Class**)(modloader::win::memory::resolve_rva(0x04753FA8));
            }
            return cache;
        }
        inline app::SqlUdtStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlUdtStorage__Class>(type_info(), "System.Data.Common", "SqlUdtStorage");
        }
        inline app::SqlUdtStorage* create() {
            return il2cpp::create_object<app::SqlUdtStorage>(get_class());
        }
    } // namespace SqlUdtStorage
} // namespace app::classes::types
