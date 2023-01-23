#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SerializedIntUberStateWrapper__Class.h>
#include <Modloader/app/structs/SerializedIntUberStateWrapper.h>

namespace app::classes::types {
    namespace SerializedIntUberStateWrapper {
        inline app::SerializedIntUberStateWrapper__Class** type_info = (app::SerializedIntUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0478B260));
        inline app::SerializedIntUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::SerializedIntUberStateWrapper__Class>(type_info, "Moon.UberStateVisualization", "SerializedIntUberStateWrapper");
        }
        inline app::SerializedIntUberStateWrapper* create() {
            return il2cpp::create_object<app::SerializedIntUberStateWrapper>(get_class());
        }
    } // namespace SerializedIntUberStateWrapper
} // namespace app::classes::types
