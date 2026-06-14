#pragma once
#include <Modloader/app/structs/SafeFindHandle.h>
#include <Modloader/app/structs/SafeFindHandle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SafeFindHandle {
        inline app::SafeFindHandle__Class** type_info() {
            static app::SafeFindHandle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SafeFindHandle__Class**)(modloader::win::memory::resolve_rva(0x047711F8));
            }
            return cache;
        }
        inline app::SafeFindHandle__Class* get_class() {
            return il2cpp::get_class<app::SafeFindHandle__Class>(type_info(), "Microsoft.Win32.SafeHandles", "SafeFindHandle");
        }
        inline app::SafeFindHandle* create() {
            return il2cpp::create_object<app::SafeFindHandle>(get_class());
        }
    } // namespace SafeFindHandle
} // namespace app::classes::types
