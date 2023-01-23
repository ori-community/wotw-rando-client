#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MonoMethodInfo__Class.h>
#include <Modloader/app/structs/MonoMethodInfo.h>
#include <Modloader/app/structs/MonoMethodInfo__Boxed.h>

namespace app::classes::types {
    namespace MonoMethodInfo {
        namespace {
            inline app::MonoMethodInfo__Class* type_info_ref = nullptr;
        }
        inline app::MonoMethodInfo__Class** type_info = &type_info_ref;
        inline app::MonoMethodInfo__Class* get_class() {
            return il2cpp::get_class<app::MonoMethodInfo__Class>(type_info, "System.Reflection", "MonoMethodInfo");
        }
        inline app::MonoMethodInfo* create() {
            return il2cpp::create_object<app::MonoMethodInfo>(get_class());
        }
        inline app::MonoMethodInfo__Boxed* box(app::MonoMethodInfo value) {
            return il2cpp::box_value<app::MonoMethodInfo__Boxed>(get_class(), value);
        }
    } // namespace MonoMethodInfo
} // namespace app::classes::types
