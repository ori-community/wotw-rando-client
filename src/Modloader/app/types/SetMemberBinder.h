#pragma once
#include <Modloader/app/structs/SetMemberBinder.h>
#include <Modloader/app/structs/SetMemberBinder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SetMemberBinder {
        inline app::SetMemberBinder__Class** type_info() {
            static app::SetMemberBinder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SetMemberBinder__Class**)(modloader::win::memory::resolve_rva(0x04719358));
            }
            return cache;
        }
        inline app::SetMemberBinder__Class* get_class() {
            return il2cpp::get_class<app::SetMemberBinder__Class>(type_info(), "System.Dynamic", "SetMemberBinder");
        }
        inline app::SetMemberBinder* create() {
            return il2cpp::create_object<app::SetMemberBinder>(get_class());
        }
    } // namespace SetMemberBinder
} // namespace app::classes::types
