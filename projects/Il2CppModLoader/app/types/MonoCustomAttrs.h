#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoCustomAttrs {
        inline app::MonoCustomAttrs__Class** type_info = (app::MonoCustomAttrs__Class**)(modloader::win::memory::resolve_rva(0x04719648));
        inline app::MonoCustomAttrs__Class* get_class() {
            return il2cpp::get_class<app::MonoCustomAttrs__Class>(type_info, "System", "MonoCustomAttrs");
        }
        inline app::MonoCustomAttrs* create() {
            return il2cpp::create_object<app::MonoCustomAttrs>(get_class());
        }
    } // namespace MonoCustomAttrs
} // namespace app::classes::types
