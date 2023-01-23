#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SqlByteStorage__Class.h>
#include <Modloader/app/structs/SqlByteStorage.h>

namespace app::classes::types {
    namespace SqlByteStorage {
        inline app::SqlByteStorage__Class** type_info = (app::SqlByteStorage__Class**)(modloader::win::memory::resolve_rva(0x04779798));
        inline app::SqlByteStorage__Class* get_class() {
            return il2cpp::get_class<app::SqlByteStorage__Class>(type_info, "System.Data.Common", "SqlByteStorage");
        }
        inline app::SqlByteStorage* create() {
            return il2cpp::create_object<app::SqlByteStorage>(get_class());
        }
    } // namespace SqlByteStorage
} // namespace app::classes::types
