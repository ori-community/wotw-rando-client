#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AssemblyIsEditorAssembly {
        namespace {
            inline app::AssemblyIsEditorAssembly__Class* type_info_ref = nullptr;
        }
        inline app::AssemblyIsEditorAssembly__Class** type_info = &type_info_ref;
        inline app::AssemblyIsEditorAssembly__Class* get_class() {
            return il2cpp::get_class<app::AssemblyIsEditorAssembly__Class>(type_info, "UnityEngine", "AssemblyIsEditorAssembly");
        }
        inline app::AssemblyIsEditorAssembly* create() {
            return il2cpp::create_object<app::AssemblyIsEditorAssembly>(get_class());
        }
    } // namespace AssemblyIsEditorAssembly
} // namespace app::classes::types
