#pragma once
#include <Modloader/app/structs/MonoAssemblyNamePtr.h>
#include <Modloader/app/structs/MonoAssemblyNamePtr__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoAssemblyNamePtr {
        inline app::MonoAssemblyNamePtr__Class** type_info() {
            static app::MonoAssemblyNamePtr__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoAssemblyNamePtr__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoAssemblyNamePtr__Class* get_class() {
            return il2cpp::get_class<app::MonoAssemblyNamePtr__Class>(type_info(), "Mono", "MonoAssemblyName*");
        }
        inline app::MonoAssemblyNamePtr* create() {
            return il2cpp::create_object<app::MonoAssemblyNamePtr>(get_class());
        }
    } // namespace MonoAssemblyNamePtr
} // namespace app::classes::types
