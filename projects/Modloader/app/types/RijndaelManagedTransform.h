#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RijndaelManagedTransform__Class.h>
#include <Modloader/app/structs/RijndaelManagedTransform.h>

namespace app::classes::types {
    namespace RijndaelManagedTransform {
        inline app::RijndaelManagedTransform__Class** type_info = (app::RijndaelManagedTransform__Class**)(modloader::win::memory::resolve_rva(0x047994F8));
        inline app::RijndaelManagedTransform__Class* get_class() {
            return il2cpp::get_class<app::RijndaelManagedTransform__Class>(type_info, "System.Security.Cryptography", "RijndaelManagedTransform");
        }
        inline app::RijndaelManagedTransform* create() {
            return il2cpp::create_object<app::RijndaelManagedTransform>(get_class());
        }
    } // namespace RijndaelManagedTransform
} // namespace app::classes::types
