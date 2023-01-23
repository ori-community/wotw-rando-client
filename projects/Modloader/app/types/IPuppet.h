#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IPuppet__Class.h>

namespace app::classes::types {
    namespace IPuppet {
        inline app::IPuppet__Class** type_info = (app::IPuppet__Class**)(modloader::win::memory::resolve_rva(0x047556C0));
        inline app::IPuppet__Class* get_class() {
            return il2cpp::get_class<app::IPuppet__Class>(type_info, "", "IPuppet");
        }
    } // namespace IPuppet
} // namespace app::classes::types
