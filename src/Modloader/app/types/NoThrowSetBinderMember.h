#pragma once
#include <Modloader/app/structs/NoThrowSetBinderMember.h>
#include <Modloader/app/structs/NoThrowSetBinderMember__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NoThrowSetBinderMember {
        inline app::NoThrowSetBinderMember__Class** type_info() {
            static app::NoThrowSetBinderMember__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NoThrowSetBinderMember__Class**)(modloader::win::memory::resolve_rva(0x0470D120));
            }
            return cache;
        }
        inline app::NoThrowSetBinderMember__Class* get_class() {
            return il2cpp::get_class<app::NoThrowSetBinderMember__Class>(type_info(), "Newtonsoft.Json.Utilities", "NoThrowSetBinderMember");
        }
        inline app::NoThrowSetBinderMember* create() {
            return il2cpp::create_object<app::NoThrowSetBinderMember>(get_class());
        }
    } // namespace NoThrowSetBinderMember
} // namespace app::classes::types
