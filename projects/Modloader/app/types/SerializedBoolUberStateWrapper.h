#pragma once
#include <Modloader/app/structs/SerializedBoolUberStateWrapper.h>
#include <Modloader/app/structs/SerializedBoolUberStateWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializedBoolUberStateWrapper {
        inline app::SerializedBoolUberStateWrapper__Class** type_info() {
            static app::SerializedBoolUberStateWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializedBoolUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472C4B0));
            }
            return cache;
        }
        inline app::SerializedBoolUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::SerializedBoolUberStateWrapper__Class>(type_info(), "Moon.UberStateVisualization", "SerializedBoolUberStateWrapper");
        }
        inline app::SerializedBoolUberStateWrapper* create() {
            return il2cpp::create_object<app::SerializedBoolUberStateWrapper>(get_class());
        }
    } // namespace SerializedBoolUberStateWrapper
} // namespace app::classes::types
