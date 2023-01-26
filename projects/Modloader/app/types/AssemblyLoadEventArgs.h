#pragma once
#include <Modloader/app/structs/AssemblyLoadEventArgs.h>
#include <Modloader/app/structs/AssemblyLoadEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AssemblyLoadEventArgs {
        inline app::AssemblyLoadEventArgs__Class** type_info() {
            static app::AssemblyLoadEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AssemblyLoadEventArgs__Class**)(modloader::win::memory::resolve_rva(0x04778C90));
            }
            return cache;
        }
        inline app::AssemblyLoadEventArgs__Class* get_class() {
            return il2cpp::get_class<app::AssemblyLoadEventArgs__Class>(type_info(), "System", "AssemblyLoadEventArgs");
        }
        inline app::AssemblyLoadEventArgs* create() {
            return il2cpp::create_object<app::AssemblyLoadEventArgs>(get_class());
        }
    } // namespace AssemblyLoadEventArgs
} // namespace app::classes::types
