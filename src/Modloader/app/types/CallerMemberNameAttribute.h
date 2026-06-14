#pragma once
#include <Modloader/app/structs/CallerMemberNameAttribute.h>
#include <Modloader/app/structs/CallerMemberNameAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CallerMemberNameAttribute {
        inline app::CallerMemberNameAttribute__Class** type_info() {
            static app::CallerMemberNameAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CallerMemberNameAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CallerMemberNameAttribute__Class* get_class() {
            return il2cpp::get_class<app::CallerMemberNameAttribute__Class>(type_info(), "System.Runtime.CompilerServices", "CallerMemberNameAttribute");
        }
        inline app::CallerMemberNameAttribute* create() {
            return il2cpp::create_object<app::CallerMemberNameAttribute>(get_class());
        }
    } // namespace CallerMemberNameAttribute
} // namespace app::classes::types
