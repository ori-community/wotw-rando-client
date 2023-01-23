#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DoubleStorage__Class.h>
#include <Modloader/app/structs/DoubleStorage.h>

namespace app::classes::types {
    namespace DoubleStorage {
        inline app::DoubleStorage__Class** type_info = (app::DoubleStorage__Class**)(modloader::win::memory::resolve_rva(0x0472ECC8));
        inline app::DoubleStorage__Class* get_class() {
            return il2cpp::get_class<app::DoubleStorage__Class>(type_info, "System.Data.Common", "DoubleStorage");
        }
        inline app::DoubleStorage* create() {
            return il2cpp::create_object<app::DoubleStorage>(get_class());
        }
    } // namespace DoubleStorage
} // namespace app::classes::types
