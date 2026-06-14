#pragma once
#include <Modloader/app/structs/ExcludeFromObjectFactoryAttribute.h>
#include <Modloader/app/structs/ExcludeFromObjectFactoryAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ExcludeFromObjectFactoryAttribute {
        inline app::ExcludeFromObjectFactoryAttribute__Class** type_info() {
            static app::ExcludeFromObjectFactoryAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ExcludeFromObjectFactoryAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ExcludeFromObjectFactoryAttribute__Class* get_class() {
            return il2cpp::get_class<app::ExcludeFromObjectFactoryAttribute__Class>(type_info(), "UnityEngine", "ExcludeFromObjectFactoryAttribute");
        }
        inline app::ExcludeFromObjectFactoryAttribute* create() {
            return il2cpp::create_object<app::ExcludeFromObjectFactoryAttribute>(get_class());
        }
    } // namespace ExcludeFromObjectFactoryAttribute
} // namespace app::classes::types
