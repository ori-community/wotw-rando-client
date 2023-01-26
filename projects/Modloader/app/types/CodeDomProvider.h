#pragma once
#include <Modloader/app/structs/CodeDomProvider.h>
#include <Modloader/app/structs/CodeDomProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CodeDomProvider {
        inline app::CodeDomProvider__Class** type_info() {
            static app::CodeDomProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CodeDomProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CodeDomProvider__Class* get_class() {
            return il2cpp::get_class<app::CodeDomProvider__Class>(type_info(), "Microsoft.CSharp", "CodeDomProvider");
        }
        inline app::CodeDomProvider* create() {
            return il2cpp::create_object<app::CodeDomProvider>(get_class());
        }
    } // namespace CodeDomProvider
} // namespace app::classes::types
