#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FSharpUtils {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FSharpUtils__Class** type_info;
        inline app::FSharpUtils__Class* get_class() {
            return il2cpp::get_class<app::FSharpUtils__Class>(type_info, "Newtonsoft.Json.Utilities", "FSharpUtils");
        }
        inline app::FSharpUtils* create() {
            return il2cpp::create_object<app::FSharpUtils>(get_class());
        }
    } // namespace FSharpUtils
} // namespace app::classes::types
