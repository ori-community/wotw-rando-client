#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IDictionaryService__Class.h>

namespace app::classes::types {
    namespace IDictionaryService {
        inline app::IDictionaryService__Class** type_info = (app::IDictionaryService__Class**)(modloader::win::memory::resolve_rva(0x047108D8));
        inline app::IDictionaryService__Class* get_class() {
            return il2cpp::get_class<app::IDictionaryService__Class>(type_info, "System.ComponentModel.Design", "IDictionaryService");
        }
    } // namespace IDictionaryService
} // namespace app::classes::types
