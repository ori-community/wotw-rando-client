#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ConfidenceFactor__Enum {
        inline app::ConfidenceFactor__Enum__Class** type_info = (app::ConfidenceFactor__Enum__Class**)(modloader::win::memory::resolve_rva(0x0471BA60));
        inline app::ConfidenceFactor__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConfidenceFactor__Enum__Class>(type_info, "Mono.Math.Prime", "ConfidenceFactor");
        }
        inline app::ConfidenceFactor__Enum* create() {
            return il2cpp::create_object<app::ConfidenceFactor__Enum>(get_class());
        }
    } // namespace ConfidenceFactor__Enum
} // namespace app::classes::types
