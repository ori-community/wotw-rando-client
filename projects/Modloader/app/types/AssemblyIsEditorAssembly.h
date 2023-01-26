#pragma once
#include <Modloader/app/structs/AssemblyIsEditorAssembly.h>
#include <Modloader/app/structs/AssemblyIsEditorAssembly__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyIsEditorAssembly {
        inline app::AssemblyIsEditorAssembly__Class** type_info() {
            static app::AssemblyIsEditorAssembly__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AssemblyIsEditorAssembly__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AssemblyIsEditorAssembly__Class* get_class() {
            return il2cpp::get_class<app::AssemblyIsEditorAssembly__Class>(type_info(), "UnityEngine", "AssemblyIsEditorAssembly");
        }
        inline app::AssemblyIsEditorAssembly* create() {
            return il2cpp::create_object<app::AssemblyIsEditorAssembly>(get_class());
        }
    } // namespace AssemblyIsEditorAssembly
} // namespace app::classes::types
