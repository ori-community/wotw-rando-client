#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CallerMemberNameAttribute {
        namespace {
            inline app::CallerMemberNameAttribute__Class* type_info_ref = nullptr;
        }
        inline app::CallerMemberNameAttribute__Class** type_info = &type_info_ref;
        inline app::CallerMemberNameAttribute__Class* get_class() {
            return il2cpp::get_class<app::CallerMemberNameAttribute__Class>(type_info, "System.Runtime.CompilerServices", "CallerMemberNameAttribute");
        }
        inline app::CallerMemberNameAttribute* create() {
            return il2cpp::create_object<app::CallerMemberNameAttribute>(get_class());
        }
    } // namespace CallerMemberNameAttribute
} // namespace app::classes::types
