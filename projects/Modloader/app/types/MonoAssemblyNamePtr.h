#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MonoAssemblyNamePtr {
        namespace {
            inline app::MonoAssemblyNamePtr__Class* type_info_ref = nullptr;
        }
        inline app::MonoAssemblyNamePtr__Class** type_info = &type_info_ref;
        inline app::MonoAssemblyNamePtr__Class* get_class() {
            return il2cpp::get_class<app::MonoAssemblyNamePtr__Class>(type_info, "Mono", "MonoAssemblyName*");
        }
        inline app::MonoAssemblyNamePtr* create() {
            return il2cpp::create_object<app::MonoAssemblyNamePtr>(get_class());
        }
    } // namespace MonoAssemblyNamePtr
} // namespace app::classes::types
