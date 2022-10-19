#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkIterator {
        inline app::AkIterator__Class** type_info = (app::AkIterator__Class**)(modloader::win::memory::resolve_rva(0x04705A80));
        inline app::AkIterator__Class* get_class() {
            return il2cpp::get_class<app::AkIterator__Class>(type_info, "", "AkIterator");
        }
        inline app::AkIterator* create() {
            return il2cpp::create_object<app::AkIterator>(get_class());
        }
    } // namespace AkIterator
} // namespace app::classes::types
