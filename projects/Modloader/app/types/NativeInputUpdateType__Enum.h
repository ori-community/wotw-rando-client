#pragma once
#include <Modloader/app/structs/NativeInputUpdateType__Enum.h>
#include <Modloader/app/structs/NativeInputUpdateType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NativeInputUpdateType__Enum {
        inline app::NativeInputUpdateType__Enum__Class** type_info() {
            static app::NativeInputUpdateType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NativeInputUpdateType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04704330));
            }
            return cache;
        }
        inline app::NativeInputUpdateType__Enum__Class* get_class() {
            return il2cpp::get_class<app::NativeInputUpdateType__Enum__Class>(type_info(), "UnityEngineInternal.Input", "NativeInputUpdateType");
        }
        inline app::NativeInputUpdateType__Enum* create() {
            return il2cpp::create_object<app::NativeInputUpdateType__Enum>(get_class());
        }
    } // namespace NativeInputUpdateType__Enum
} // namespace app::classes::types
