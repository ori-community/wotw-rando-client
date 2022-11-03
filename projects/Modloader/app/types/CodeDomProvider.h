#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CodeDomProvider {
        namespace {
            inline app::CodeDomProvider__Class* type_info_ref = nullptr;
        }
        inline app::CodeDomProvider__Class** type_info = &type_info_ref;
        inline app::CodeDomProvider__Class* get_class() {
            return il2cpp::get_class<app::CodeDomProvider__Class>(type_info, "Microsoft.CSharp", "CodeDomProvider");
        }
        inline app::CodeDomProvider* create() {
            return il2cpp::create_object<app::CodeDomProvider>(get_class());
        }
    } // namespace CodeDomProvider
} // namespace app::classes::types
