#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkIterator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkIterator__Class** type_info;
        inline app::AkIterator__Class* get_class() {
            return il2cpp::get_class<app::AkIterator__Class>(type_info, "", "AkIterator");
        }
        inline app::AkIterator* create() {
            return il2cpp::create_object<app::AkIterator>(get_class());
        }
    } // namespace AkIterator
} // namespace app::classes::types
