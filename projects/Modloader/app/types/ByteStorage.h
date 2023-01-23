#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ByteStorage__Class.h>
#include <Modloader/app/structs/ByteStorage.h>

namespace app::classes::types {
    namespace ByteStorage {
        inline app::ByteStorage__Class** type_info = (app::ByteStorage__Class**)(modloader::win::memory::resolve_rva(0x0470B9B8));
        inline app::ByteStorage__Class* get_class() {
            return il2cpp::get_class<app::ByteStorage__Class>(type_info, "System.Data.Common", "ByteStorage");
        }
        inline app::ByteStorage* create() {
            return il2cpp::create_object<app::ByteStorage>(get_class());
        }
    } // namespace ByteStorage
} // namespace app::classes::types
