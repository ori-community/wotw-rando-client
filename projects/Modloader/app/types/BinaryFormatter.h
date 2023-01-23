#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BinaryFormatter__Class.h>
#include <Modloader/app/structs/BinaryFormatter.h>

namespace app::classes::types {
    namespace BinaryFormatter {
        inline app::BinaryFormatter__Class** type_info = (app::BinaryFormatter__Class**)(modloader::win::memory::resolve_rva(0x0477A2D0));
        inline app::BinaryFormatter__Class* get_class() {
            return il2cpp::get_class<app::BinaryFormatter__Class>(type_info, "System.Runtime.Serialization.Formatters.Binary", "BinaryFormatter");
        }
        inline app::BinaryFormatter* create() {
            return il2cpp::create_object<app::BinaryFormatter>(get_class());
        }
    } // namespace BinaryFormatter
} // namespace app::classes::types
