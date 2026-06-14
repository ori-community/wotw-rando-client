#pragma once
#include <Modloader/app/structs/SerializedFloatUberStateWrapper.h>
#include <Modloader/app/structs/SerializedFloatUberStateWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SerializedFloatUberStateWrapper {
        inline app::SerializedFloatUberStateWrapper__Class** type_info() {
            static app::SerializedFloatUberStateWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SerializedFloatUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0472EE48));
            }
            return cache;
        }
        inline app::SerializedFloatUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::SerializedFloatUberStateWrapper__Class>(type_info(), "Moon.UberStateVisualization", "SerializedFloatUberStateWrapper");
        }
        inline app::SerializedFloatUberStateWrapper* create() {
            return il2cpp::create_object<app::SerializedFloatUberStateWrapper>(get_class());
        }
    } // namespace SerializedFloatUberStateWrapper
} // namespace app::classes::types
