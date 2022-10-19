#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDictionaryService {
        inline app::IDictionaryService__Class** type_info = (app::IDictionaryService__Class**)(modloader::win::memory::resolve_rva(0x047108D8));
        inline app::IDictionaryService__Class* get_class() {
            return il2cpp::get_class<app::IDictionaryService__Class>(type_info, "System.ComponentModel.Design", "IDictionaryService");
        }
    } // namespace IDictionaryService
} // namespace app::classes::types
