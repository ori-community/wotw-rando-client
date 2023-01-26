#pragma once
#include <Modloader/app/structs/AssemblyHashAlgorithm__Enum.h>
#include <Modloader/app/structs/AssemblyHashAlgorithm__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyHashAlgorithm__Enum {
        inline app::AssemblyHashAlgorithm__Enum__Class** type_info() {
            static app::AssemblyHashAlgorithm__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AssemblyHashAlgorithm__Enum__Class**)(modloader::win::memory::resolve_rva(0x04706A30));
            }
            return cache;
        }
        inline app::AssemblyHashAlgorithm__Enum__Class* get_class() {
            return il2cpp::get_class<app::AssemblyHashAlgorithm__Enum__Class>(type_info(), "System.Configuration.Assemblies", "AssemblyHashAlgorithm");
        }
        inline app::AssemblyHashAlgorithm__Enum* create() {
            return il2cpp::create_object<app::AssemblyHashAlgorithm__Enum>(get_class());
        }
    } // namespace AssemblyHashAlgorithm__Enum
} // namespace app::classes::types
