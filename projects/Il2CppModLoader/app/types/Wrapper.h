#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace Wrapper {
        inline app::Wrapper__Class** type_info = (app::Wrapper__Class**)(modloader::win::memory::resolve_rva(0x047584C8));
        inline app::Wrapper__Class* get_class() {
            return il2cpp::get_class<app::Wrapper__Class>(type_info, "Grdk", "Wrapper");
        }
        inline app::Wrapper* create() {
            return il2cpp::create_object<app::Wrapper>(get_class());
        }
    } // namespace Wrapper
} // namespace app::classes::types
