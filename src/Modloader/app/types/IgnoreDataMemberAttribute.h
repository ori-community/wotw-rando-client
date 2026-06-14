#pragma once
#include <Modloader/app/structs/IgnoreDataMemberAttribute.h>
#include <Modloader/app/structs/IgnoreDataMemberAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IgnoreDataMemberAttribute {
        inline app::IgnoreDataMemberAttribute__Class** type_info() {
            static app::IgnoreDataMemberAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IgnoreDataMemberAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IgnoreDataMemberAttribute__Class* get_class() {
            return il2cpp::get_class<app::IgnoreDataMemberAttribute__Class>(type_info(), "System.Runtime.Serialization", "IgnoreDataMemberAttribute");
        }
        inline app::IgnoreDataMemberAttribute* create() {
            return il2cpp::create_object<app::IgnoreDataMemberAttribute>(get_class());
        }
    } // namespace IgnoreDataMemberAttribute
} // namespace app::classes::types
