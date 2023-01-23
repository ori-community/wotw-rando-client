#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BitConverter__Class.h>
#include <Modloader/app/structs/BitConverter.h>

namespace app::classes::types {
    namespace BitConverter {
        inline app::BitConverter__Class** type_info = (app::BitConverter__Class**)(modloader::win::memory::resolve_rva(0x0475F448));
        inline app::BitConverter__Class* get_class() {
            return il2cpp::get_class<app::BitConverter__Class>(type_info, "System", "BitConverter");
        }
        inline app::BitConverter* create() {
            return il2cpp::create_object<app::BitConverter>(get_class());
        }
    } // namespace BitConverter
} // namespace app::classes::types
