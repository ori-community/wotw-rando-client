#pragma once
#include <Modloader/app/structs/MemberAccessException.h>
#include <Modloader/app/structs/MemberAccessException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberAccessException {
        inline app::MemberAccessException__Class** type_info() {
            static app::MemberAccessException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemberAccessException__Class**)(modloader::win::memory::resolve_rva(0x04707BC8));
            }
            return cache;
        }
        inline app::MemberAccessException__Class* get_class() {
            return il2cpp::get_class<app::MemberAccessException__Class>(type_info(), "System", "MemberAccessException");
        }
        inline app::MemberAccessException* create() {
            return il2cpp::create_object<app::MemberAccessException>(get_class());
        }
    } // namespace MemberAccessException
} // namespace app::classes::types
