#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace FormerlySerializedAsAttribute {
        namespace {
            inline app::FormerlySerializedAsAttribute__Class* type_info_ref = nullptr;
        }
        inline app::FormerlySerializedAsAttribute__Class** type_info = &type_info_ref;
        inline app::FormerlySerializedAsAttribute__Class* get_class() {
            return il2cpp::get_class<app::FormerlySerializedAsAttribute__Class>(type_info, "UnityEngine.Serialization", "FormerlySerializedAsAttribute");
        }
        inline app::FormerlySerializedAsAttribute* create() {
            return il2cpp::create_object<app::FormerlySerializedAsAttribute>(get_class());
        }
    } // namespace FormerlySerializedAsAttribute
} // namespace app::classes::types
