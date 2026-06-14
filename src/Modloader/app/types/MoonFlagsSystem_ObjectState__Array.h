#pragma once
#include <Modloader/app/structs/MoonFlagsSystem_ObjectState__Array.h>
#include <Modloader/app/structs/MoonFlagsSystem_ObjectState__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonFlagsSystem_ObjectState__Array {
        inline app::MoonFlagsSystem_ObjectState__Array__Class** type_info() {
            static app::MoonFlagsSystem_ObjectState__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonFlagsSystem_ObjectState__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonFlagsSystem_ObjectState__Array__Class* get_class() {
            return il2cpp::get_class<app::MoonFlagsSystem_ObjectState__Array__Class>(type_info(), "", "MoonFlagsSystem+ObjectState[]");
        }
        inline app::MoonFlagsSystem_ObjectState__Array* create() {
            return il2cpp::create_object<app::MoonFlagsSystem_ObjectState__Array>(get_class());
        }
    } // namespace MoonFlagsSystem_ObjectState__Array
} // namespace app::classes::types
