#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CSharpCodeProvider {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CSharpCodeProvider__Class** type_info;
        inline app::CSharpCodeProvider__Class* get_class() {
            return il2cpp::get_class<app::CSharpCodeProvider__Class>(type_info, "Microsoft.CSharp", "CSharpCodeProvider");
        }
        inline app::CSharpCodeProvider* create() {
            return il2cpp::create_object<app::CSharpCodeProvider>(get_class());
        }
    } // namespace CSharpCodeProvider
} // namespace app::classes::types
