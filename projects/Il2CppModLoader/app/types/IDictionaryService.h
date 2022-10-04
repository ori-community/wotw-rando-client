#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDictionaryService {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IDictionaryService__Class** type_info;
        inline app::IDictionaryService__Class* get_class() {
            return il2cpp::get_class<app::IDictionaryService__Class>(type_info, "System.ComponentModel.Design", "IDictionaryService");
        }
        inline app::IDictionaryService* create() {
            return il2cpp::create_object<app::IDictionaryService>(get_class());
        }
    } // namespace IDictionaryService
} // namespace app::classes::types
