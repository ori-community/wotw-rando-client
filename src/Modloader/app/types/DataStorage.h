#pragma once
#include <Modloader/app/structs/DataStorage.h>
#include <Modloader/app/structs/DataStorage__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataStorage {
        inline app::DataStorage__Class** type_info() {
            static app::DataStorage__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataStorage__Class**)(modloader::win::memory::resolve_rva(0x04750298));
            }
            return cache;
        }
        inline app::DataStorage__Class* get_class() {
            return il2cpp::get_class<app::DataStorage__Class>(type_info(), "System.Data.Common", "DataStorage");
        }
        inline app::DataStorage* create() {
            return il2cpp::create_object<app::DataStorage>(get_class());
        }
    } // namespace DataStorage
} // namespace app::classes::types
