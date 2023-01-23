#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MonoAssemblyName__Class.h>
#include <Modloader/app/structs/MonoAssemblyName.h>
#include <Modloader/app/structs/MonoAssemblyName__Boxed.h>

namespace app::classes::types {
    namespace MonoAssemblyName {
        namespace {
            inline app::MonoAssemblyName__Class* type_info_ref = nullptr;
        }
        inline app::MonoAssemblyName__Class** type_info = &type_info_ref;
        inline app::MonoAssemblyName__Class* get_class() {
            return il2cpp::get_class<app::MonoAssemblyName__Class>(type_info, "Mono", "MonoAssemblyName");
        }
        inline app::MonoAssemblyName* create() {
            return il2cpp::create_object<app::MonoAssemblyName>(get_class());
        }
        inline app::MonoAssemblyName__Boxed* box(app::MonoAssemblyName value) {
            return il2cpp::box_value<app::MonoAssemblyName__Boxed>(get_class(), value);
        }
    } // namespace MonoAssemblyName
} // namespace app::classes::types
