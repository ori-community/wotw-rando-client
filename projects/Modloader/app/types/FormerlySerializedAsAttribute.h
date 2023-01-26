#pragma once
#include <Modloader/app/structs/FormerlySerializedAsAttribute.h>
#include <Modloader/app/structs/FormerlySerializedAsAttribute__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FormerlySerializedAsAttribute {
        inline app::FormerlySerializedAsAttribute__Class** type_info() {
            static app::FormerlySerializedAsAttribute__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FormerlySerializedAsAttribute__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FormerlySerializedAsAttribute__Class* get_class() {
            return il2cpp::get_class<app::FormerlySerializedAsAttribute__Class>(type_info(), "UnityEngine.Serialization", "FormerlySerializedAsAttribute");
        }
        inline app::FormerlySerializedAsAttribute* create() {
            return il2cpp::create_object<app::FormerlySerializedAsAttribute>(get_class());
        }
    } // namespace FormerlySerializedAsAttribute
} // namespace app::classes::types
