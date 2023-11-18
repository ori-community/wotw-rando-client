#pragma once
#include <Modloader/app/structs/MonoAssemblyName.h>
#include <Modloader/app/structs/MonoAssemblyName__Boxed.h>
#include <Modloader/app/structs/MonoAssemblyName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoAssemblyName {
        inline app::MonoAssemblyName__Class** type_info() {
            static app::MonoAssemblyName__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoAssemblyName__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoAssemblyName__Class* get_class() {
            return il2cpp::get_class<app::MonoAssemblyName__Class>(type_info(), "Mono", "MonoAssemblyName");
        }
        inline app::MonoAssemblyName* create() {
            return il2cpp::create_object<app::MonoAssemblyName>(get_class());
        }
        inline app::MonoAssemblyName__Boxed* box(app::MonoAssemblyName value) {
            return il2cpp::box_value<app::MonoAssemblyName__Boxed>(get_class(), value);
        }
    } // namespace MonoAssemblyName
} // namespace app::classes::types
