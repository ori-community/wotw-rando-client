#pragma once
#include <Modloader/app/structs/MonoMethodInfo.h>
#include <Modloader/app/structs/MonoMethodInfo__Boxed.h>
#include <Modloader/app/structs/MonoMethodInfo__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoMethodInfo {
        inline app::MonoMethodInfo__Class** type_info() {
            static app::MonoMethodInfo__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoMethodInfo__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoMethodInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoMethodInfo__Class>(type_info(), "System.Reflection", "MonoMethodInfo");
        }
        inline app::MonoMethodInfo* create() {
            return il2cpp::create_object<app::MonoMethodInfo>(get_class());
        }
        inline app::MonoMethodInfo__Boxed* box(app::MonoMethodInfo value) {
            return il2cpp::box_value<app::MonoMethodInfo__Boxed>(get_class(), value);
        }
    } // namespace MonoMethodInfo
} // namespace app::classes::types
