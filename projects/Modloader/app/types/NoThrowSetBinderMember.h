#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NoThrowSetBinderMember {
        inline app::NoThrowSetBinderMember__Class** type_info = (app::NoThrowSetBinderMember__Class**)(modloader::win::memory::resolve_rva(0x0470D120));
        inline app::NoThrowSetBinderMember__Class* get_class() {
            return il2cpp::get_class<app::NoThrowSetBinderMember__Class>(type_info, "Newtonsoft.Json.Utilities", "NoThrowSetBinderMember");
        }
        inline app::NoThrowSetBinderMember* create() {
            return il2cpp::create_object<app::NoThrowSetBinderMember>(get_class());
        }
    } // namespace NoThrowSetBinderMember
} // namespace app::classes::types
