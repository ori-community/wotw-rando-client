#pragma once
#include <Modloader/app/structs/IDictionaryService.h>
#include <Modloader/app/structs/IDictionaryService__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDictionaryService {
        inline app::IDictionaryService__Class** type_info() {
            static app::IDictionaryService__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IDictionaryService__Class**)(modloader::win::memory::resolve_rva(0x047108D8));
            }
            return cache;
        }
        inline app::IDictionaryService__Class* get_class() {
            return il2cpp::get_class<app::IDictionaryService__Class>(type_info(), "System.ComponentModel.Design", "IDictionaryService");
        }
    } // namespace IDictionaryService
} // namespace app::classes::types
