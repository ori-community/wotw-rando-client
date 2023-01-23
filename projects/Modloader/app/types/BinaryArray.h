#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BinaryArray__Class.h>
#include <Modloader/app/structs/BinaryArray.h>

namespace app::classes::types {
    namespace BinaryArray {
        inline app::BinaryArray__Class** type_info = (app::BinaryArray__Class**)(modloader::win::memory::resolve_rva(0x0473E0B0));
        inline app::BinaryArray__Class* get_class() {
            return il2cpp::get_class<app::BinaryArray__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryArray");
        }
        inline app::BinaryArray* create() {
            return il2cpp::create_object<app::BinaryArray>(get_class());
        }
    } // namespace BinaryArray
} // namespace app::classes::types
