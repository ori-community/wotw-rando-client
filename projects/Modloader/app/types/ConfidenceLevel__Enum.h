#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConfidenceLevel__Enum__Class.h>
#include <Modloader/app/structs/ConfidenceLevel__Enum.h>

namespace app::classes::types {
    namespace ConfidenceLevel__Enum {
        inline app::ConfidenceLevel__Enum__Class** type_info = (app::ConfidenceLevel__Enum__Class**)(modloader::win::memory::resolve_rva(0x04775968));
        inline app::ConfidenceLevel__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConfidenceLevel__Enum__Class>(type_info, "UnityEngine.Windows.Speech", "ConfidenceLevel");
        }
        inline app::ConfidenceLevel__Enum* create() {
            return il2cpp::create_object<app::ConfidenceLevel__Enum>(get_class());
        }
    } // namespace ConfidenceLevel__Enum
} // namespace app::classes::types
