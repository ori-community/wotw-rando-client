#pragma once
#include <Modloader/app/structs/StackTraceUtility.h>
#include <Modloader/app/structs/StackTraceUtility__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StackTraceUtility {
        inline app::StackTraceUtility__Class** type_info() {
            static app::StackTraceUtility__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StackTraceUtility__Class**)(modloader::win::memory::resolve_rva(0x04731658));
            }
            return cache;
        }
        inline app::StackTraceUtility__Class* get_class() {
            return il2cpp::get_class<app::StackTraceUtility__Class>(type_info(), "UnityEngine", "StackTraceUtility");
        }
        inline app::StackTraceUtility* create() {
            return il2cpp::create_object<app::StackTraceUtility>(get_class());
        }
    } // namespace StackTraceUtility
} // namespace app::classes::types
