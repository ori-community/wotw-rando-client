#pragma once
#include <Modloader/app/structs/MissingMemberException.h>
#include <Modloader/app/structs/MissingMemberException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MissingMemberException {
        inline app::MissingMemberException__Class** type_info() {
            static app::MissingMemberException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MissingMemberException__Class**)(modloader::win::memory::resolve_rva(0x04713258));
            }
            return cache;
        }
        inline app::MissingMemberException__Class* get_class() {
            return il2cpp::get_class<app::MissingMemberException__Class>(type_info(), "System", "MissingMemberException");
        }
        inline app::MissingMemberException* create() {
            return il2cpp::create_object<app::MissingMemberException>(get_class());
        }
    } // namespace MissingMemberException
} // namespace app::classes::types
