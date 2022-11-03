#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeStorage {
        inline app::DateTimeStorage__Class** type_info = (app::DateTimeStorage__Class**)(modloader::win::memory::resolve_rva(0x04781280));
        inline app::DateTimeStorage__Class* get_class() {
            return il2cpp::get_class<app::DateTimeStorage__Class>(type_info, "System.Data.Common", "DateTimeStorage");
        }
        inline app::DateTimeStorage* create() {
            return il2cpp::create_object<app::DateTimeStorage>(get_class());
        }
    } // namespace DateTimeStorage
} // namespace app::classes::types
