#pragma once
#include <Modloader/app/structs/UnityLogWriter.h>
#include <Modloader/app/structs/UnityLogWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityLogWriter {
        inline app::UnityLogWriter__Class** type_info() {
            static app::UnityLogWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnityLogWriter__Class**)(modloader::win::memory::resolve_rva(0x04739870));
            }
            return cache;
        }
        inline app::UnityLogWriter__Class* get_class() {
            return il2cpp::get_class<app::UnityLogWriter__Class>(type_info(), "UnityEngine", "UnityLogWriter");
        }
        inline app::UnityLogWriter* create() {
            return il2cpp::create_object<app::UnityLogWriter>(get_class());
        }
    } // namespace UnityLogWriter
} // namespace app::classes::types
