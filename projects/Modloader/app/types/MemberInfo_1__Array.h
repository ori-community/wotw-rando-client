#pragma once
#include <Modloader/app/structs/MemberInfo_1__Array.h>
#include <Modloader/app/structs/MemberInfo_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MemberInfo_1__Array {
        inline app::MemberInfo_1__Array__Class** type_info() {
            static app::MemberInfo_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MemberInfo_1__Array__Class**)(modloader::win::memory::resolve_rva(0x04760080));
            }
            return cache;
        }
        inline app::MemberInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::MemberInfo_1__Array__Class>(type_info(), "System.Reflection", "MemberInfo[]");
        }
        inline app::MemberInfo_1__Array* create() {
            return il2cpp::create_object<app::MemberInfo_1__Array>(get_class());
        }
    } // namespace MemberInfo_1__Array
} // namespace app::classes::types
