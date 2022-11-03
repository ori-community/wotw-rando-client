#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EntryPointNotFoundException {
        inline app::EntryPointNotFoundException__Class** type_info = (app::EntryPointNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x04714FD0));
        inline app::EntryPointNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::EntryPointNotFoundException__Class>(type_info, "System", "EntryPointNotFoundException");
        }
        inline app::EntryPointNotFoundException* create() {
            return il2cpp::create_object<app::EntryPointNotFoundException>(get_class());
        }
    } // namespace EntryPointNotFoundException
} // namespace app::classes::types
