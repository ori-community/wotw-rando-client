#pragma once
#include <Modloader/app/structs/ConfidenceLevel__Enum.h>
#include <Modloader/app/structs/ConfidenceLevel__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConfidenceLevel__Enum {
        inline app::ConfidenceLevel__Enum__Class** type_info() {
            static app::ConfidenceLevel__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConfidenceLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x04775968));
            }
            return cache;
        }
        inline app::ConfidenceLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConfidenceLevel__Enum__Class>(type_info(), "UnityEngine.Windows.Speech", "ConfidenceLevel");
        }
        inline app::ConfidenceLevel__Enum* create() {
            return il2cpp::create_object<app::ConfidenceLevel__Enum>(get_class());
        }
    } // namespace ConfidenceLevel__Enum
} // namespace app::classes::types
