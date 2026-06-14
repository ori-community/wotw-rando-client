#pragma once
#include <Modloader/app/structs/SerializedByteUberStateWrapper.h>
#include <Modloader/app/structs/SerializedByteUberStateWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializedByteUberStateWrapper {
        inline app::SerializedByteUberStateWrapper__Class** type_info() {
            static app::SerializedByteUberStateWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializedByteUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x04708518));
            }
            return cache;
        }
        inline app::SerializedByteUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::SerializedByteUberStateWrapper__Class>(type_info(), "Moon.UberStateVisualization", "SerializedByteUberStateWrapper");
        }
        inline app::SerializedByteUberStateWrapper* create() {
            return il2cpp::create_object<app::SerializedByteUberStateWrapper>(get_class());
        }
    } // namespace SerializedByteUberStateWrapper
} // namespace app::classes::types
