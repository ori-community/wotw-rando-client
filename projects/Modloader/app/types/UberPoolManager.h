#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPoolManager__Class.h>
#include <Modloader/app/structs/UberPoolManager.h>

namespace app::classes::types {
    namespace UberPoolManager {
        inline app::UberPoolManager__Class** type_info = (app::UberPoolManager__Class**)(modloader::win::memory::resolve_rva(0x0474D0D0));
        inline app::UberPoolManager__Class* get_class() {
            return il2cpp::get_class<app::UberPoolManager__Class>(type_info, "", "UberPoolManager");
        }
        inline app::UberPoolManager* create() {
            return il2cpp::create_object<app::UberPoolManager>(get_class());
        }
    } // namespace UberPoolManager
} // namespace app::classes::types
