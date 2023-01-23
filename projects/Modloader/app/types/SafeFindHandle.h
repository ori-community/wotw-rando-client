#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SafeFindHandle__Class.h>
#include <Modloader/app/structs/SafeFindHandle.h>

namespace app::classes::types {
    namespace SafeFindHandle {
        inline app::SafeFindHandle__Class** type_info = (app::SafeFindHandle__Class**)(modloader::win::memory::resolve_rva(0x047711F8));
        inline app::SafeFindHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeFindHandle__Class>(type_info, "Microsoft.Win32.SafeHandles", "SafeFindHandle");
        }
        inline app::SafeFindHandle* create() {
            return il2cpp::create_object<app::SafeFindHandle>(get_class());
        }
    } // namespace SafeFindHandle
} // namespace app::classes::types
