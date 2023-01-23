#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DecimalStorage__Class.h>
#include <Modloader/app/structs/DecimalStorage.h>

namespace app::classes::types {
    namespace DecimalStorage {
        inline app::DecimalStorage__Class** type_info = (app::DecimalStorage__Class**)(modloader::win::memory::resolve_rva(0x0475B638));
        inline app::DecimalStorage__Class* get_class() {
            return il2cpp::get_class<app::DecimalStorage__Class>(type_info, "System.Data.Common", "DecimalStorage");
        }
        inline app::DecimalStorage* create() {
            return il2cpp::create_object<app::DecimalStorage>(get_class());
        }
    } // namespace DecimalStorage
} // namespace app::classes::types
