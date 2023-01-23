#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IFormatter__Class.h>

namespace app::classes::types {
    namespace IFormatter {
        inline app::IFormatter__Class** type_info = (app::IFormatter__Class**)(modloader::win::memory::resolve_rva(0x0478C7B0));
        inline app::IFormatter__Class* get_class() {
            return il2cpp::get_class<app::IFormatter__Class>(type_info, "System.Runtime.Serialization", "IFormatter");
        }
    } // namespace IFormatter
} // namespace app::classes::types
