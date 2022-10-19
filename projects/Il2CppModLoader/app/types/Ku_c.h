#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Ku_c {
        inline app::Ku_c__Class** type_info = (app::Ku_c__Class**)(modloader::win::memory::resolve_rva(0x04746998));
        inline app::Ku_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Ku_c__Class>(type_info, "", "Ku", "<>c");
        }
        inline app::Ku_c* create() {
            return il2cpp::create_object<app::Ku_c>(get_class());
        }
    } // namespace Ku_c
} // namespace app::classes::types
