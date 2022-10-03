#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HeaderInfo__Array {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HeaderInfo__Array__Class** type_info;
        inline app::HeaderInfo__Array__Class* get_class() {
            return il2cpp::get_class<app::HeaderInfo__Array__Class>(type_info, "System.Net", "HeaderInfo[]");
        }
        inline app::HeaderInfo__Array* create() {
            return il2cpp::create_object<app::HeaderInfo__Array>(get_class());
        }
    } // namespace HeaderInfo__Array
} // namespace app::classes::types
