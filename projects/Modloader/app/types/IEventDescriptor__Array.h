#pragma once
#include <Modloader/app/structs/IEventDescriptor__Array.h>
#include <Modloader/app/structs/IEventDescriptor__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEventDescriptor__Array {
        inline app::IEventDescriptor__Array__Class** type_info() {
            static app::IEventDescriptor__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IEventDescriptor__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IEventDescriptor__Array__Class* get_class() {
            return il2cpp::get_class<app::IEventDescriptor__Array__Class>(type_info(), "Moon.Timeline", "IEventDescriptor[]");
        }
        inline app::IEventDescriptor__Array* create() {
            return il2cpp::create_object<app::IEventDescriptor__Array>(get_class());
        }
    } // namespace IEventDescriptor__Array
} // namespace app::classes::types
