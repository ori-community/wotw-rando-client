#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GarbageCollector_Mode__Enum__Class.h>
#include <Modloader/app/structs/GarbageCollector_Mode__Enum.h>

namespace app::classes::types {
    namespace GarbageCollector_Mode__Enum {
        namespace {
            inline app::GarbageCollector_Mode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::GarbageCollector_Mode__Enum__Class** type_info = &type_info_ref;
        inline app::GarbageCollector_Mode__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::GarbageCollector_Mode__Enum__Class>(type_info, "UnityEngine.Scripting", "GarbageCollector", "Mode");
        }
        inline app::GarbageCollector_Mode__Enum* create() {
            return il2cpp::create_object<app::GarbageCollector_Mode__Enum>(get_class());
        }
    } // namespace GarbageCollector_Mode__Enum
} // namespace app::classes::types
