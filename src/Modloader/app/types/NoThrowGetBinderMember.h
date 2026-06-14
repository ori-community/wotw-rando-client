#pragma once
#include <Modloader/app/structs/NoThrowGetBinderMember.h>
#include <Modloader/app/structs/NoThrowGetBinderMember__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NoThrowGetBinderMember {
        inline app::NoThrowGetBinderMember__Class** type_info() {
            static app::NoThrowGetBinderMember__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NoThrowGetBinderMember__Class**)(modloader::win::memory::resolve_rva(0x0471CD50));
            }
            return cache;
        }
        inline app::NoThrowGetBinderMember__Class* get_class() {
            return il2cpp::get_class<app::NoThrowGetBinderMember__Class>(type_info(), "Newtonsoft.Json.Utilities", "NoThrowGetBinderMember");
        }
        inline app::NoThrowGetBinderMember* create() {
            return il2cpp::create_object<app::NoThrowGetBinderMember>(get_class());
        }
    } // namespace NoThrowGetBinderMember
} // namespace app::classes::types
