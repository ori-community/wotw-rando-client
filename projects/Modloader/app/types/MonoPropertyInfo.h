#pragma once
#include <Modloader/app/structs/MonoPropertyInfo.h>
#include <Modloader/app/structs/MonoPropertyInfo__Boxed.h>
#include <Modloader/app/structs/MonoPropertyInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoPropertyInfo {
        inline app::MonoPropertyInfo__Class** type_info() {
            static app::MonoPropertyInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoPropertyInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoPropertyInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoPropertyInfo__Class>(type_info(), "System.Reflection", "MonoPropertyInfo");
        }
        inline app::MonoPropertyInfo* create() {
            return il2cpp::create_object<app::MonoPropertyInfo>(get_class());
        }
        inline app::MonoPropertyInfo__Boxed* box(app::MonoPropertyInfo value) {
            return il2cpp::box_value<app::MonoPropertyInfo__Boxed>(get_class(), value);
        }
    } // namespace MonoPropertyInfo
} // namespace app::classes::types
