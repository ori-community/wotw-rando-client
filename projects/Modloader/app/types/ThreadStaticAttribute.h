#pragma once
#include <Modloader/app/structs/ThreadStaticAttribute.h>
#include <Modloader/app/structs/ThreadStaticAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ThreadStaticAttribute {
        inline app::ThreadStaticAttribute__Class** type_info() {
            static app::ThreadStaticAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ThreadStaticAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ThreadStaticAttribute__Class* get_class() {
            return il2cpp::get_class<app::ThreadStaticAttribute__Class>(type_info(), "System", "ThreadStaticAttribute");
        }
        inline app::ThreadStaticAttribute* create() {
            return il2cpp::create_object<app::ThreadStaticAttribute>(get_class());
        }
    } // namespace ThreadStaticAttribute
} // namespace app::classes::types
