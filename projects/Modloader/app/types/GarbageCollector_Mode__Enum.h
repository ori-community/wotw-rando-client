#pragma once
#include <Modloader/app/structs/GarbageCollector_Mode__Enum.h>
#include <Modloader/app/structs/GarbageCollector_Mode__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GarbageCollector_Mode__Enum {
        inline app::GarbageCollector_Mode__Enum__Class** type_info() {
            static app::GarbageCollector_Mode__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GarbageCollector_Mode__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GarbageCollector_Mode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GarbageCollector_Mode__Enum__Class>(type_info(), "UnityEngine.Scripting", "GarbageCollector", "Mode");
        }
        inline app::GarbageCollector_Mode__Enum* create() {
            return il2cpp::create_object<app::GarbageCollector_Mode__Enum>(get_class());
        }
    } // namespace GarbageCollector_Mode__Enum
} // namespace app::classes::types
