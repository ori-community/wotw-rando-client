#pragma once
#include <Modloader/app/structs/_AssemblyName.h>
#include <Modloader/app/structs/_AssemblyName__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace _AssemblyName {
        inline app::_AssemblyName__Class** type_info() {
            static app::_AssemblyName__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::_AssemblyName__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::_AssemblyName__Class* get_class() {
            return il2cpp::get_class<app::_AssemblyName__Class>(type_info(), "System.Runtime.InteropServices", "_AssemblyName");
        }
    } // namespace _AssemblyName
} // namespace app::classes::types
