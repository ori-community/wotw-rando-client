#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace JSONNode__Array {
        inline app::JSONNode__Array__Class** type_info = (app::JSONNode__Array__Class**)(modloader::win::memory::resolve_rva(0x0473D1E8));
        inline app::JSONNode__Array__Class* get_class() {
            return il2cpp::get_class<app::JSONNode__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "JSONNode[]");
        }
        inline app::JSONNode__Array* create() {
            return il2cpp::create_object<app::JSONNode__Array>(get_class());
        }
    } // namespace JSONNode__Array
} // namespace app::classes::types
