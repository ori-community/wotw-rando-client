#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPoolManager_c__Class.h>
#include <Modloader/app/structs/UberPoolManager_c.h>

namespace app::classes::types {
    namespace UberPoolManager_c {
        inline app::UberPoolManager_c__Class** type_info = (app::UberPoolManager_c__Class**)(modloader::win::memory::resolve_rva(0x04751FC0));
        inline app::UberPoolManager_c__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPoolManager_c__Class>(type_info, "", "UberPoolManager", "<>c");
        }
        inline app::UberPoolManager_c* create() {
            return il2cpp::create_object<app::UberPoolManager_c>(get_class());
        }
    } // namespace UberPoolManager_c
} // namespace app::classes::types
