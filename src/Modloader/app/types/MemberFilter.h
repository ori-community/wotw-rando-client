#pragma once
#include <Modloader/app/structs/MemberFilter.h>
#include <Modloader/app/structs/MemberFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberFilter {
        inline app::MemberFilter__Class** type_info() {
            static app::MemberFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemberFilter__Class**)(modloader::win::memory::resolve_rva(0x04797530));
            }
            return cache;
        }
        inline app::MemberFilter__Class* get_class() {
            return il2cpp::get_class<app::MemberFilter__Class>(type_info(), "System.Reflection", "MemberFilter");
        }
        inline app::MemberFilter* create() {
            return il2cpp::create_object<app::MemberFilter>(get_class());
        }
    } // namespace MemberFilter
} // namespace app::classes::types
