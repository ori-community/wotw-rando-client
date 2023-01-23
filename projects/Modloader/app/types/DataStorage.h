#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DataStorage__Class.h>
#include <Modloader/app/structs/DataStorage.h>

namespace app::classes::types {
    namespace DataStorage {
        inline app::DataStorage__Class** type_info = (app::DataStorage__Class**)(modloader::win::memory::resolve_rva(0x04750298));
        inline app::DataStorage__Class* get_class() {
            return il2cpp::get_class<app::DataStorage__Class>(type_info, "System.Data.Common", "DataStorage");
        }
        inline app::DataStorage* create() {
            return il2cpp::create_object<app::DataStorage>(get_class());
        }
    } // namespace DataStorage
} // namespace app::classes::types
