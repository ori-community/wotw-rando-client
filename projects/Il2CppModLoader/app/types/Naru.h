#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Naru {
        inline app::Naru__Class** type_info = (app::Naru__Class**)(modloader::win::memory::resolve_rva(0x047018B0));
        inline app::Naru__Class* get_class() {
            return il2cpp::get_class<app::Naru__Class>(type_info, "", "Naru");
        }
        inline app::Naru* create() {
            return il2cpp::create_object<app::Naru>(get_class());
        }
    } // namespace Naru
} // namespace app::classes::types
