#pragma once
#include <Modloader/app/structs/NonSerializedFloatUberStateWrapper.h>
#include <Modloader/app/structs/NonSerializedFloatUberStateWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NonSerializedFloatUberStateWrapper {
        inline app::NonSerializedFloatUberStateWrapper__Class** type_info() {
            static app::NonSerializedFloatUberStateWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NonSerializedFloatUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0478D300));
            }
            return cache;
        }
        inline app::NonSerializedFloatUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::NonSerializedFloatUberStateWrapper__Class>(type_info(), "Moon.UberStateVisualization", "NonSerializedFloatUberStateWrapper");
        }
        inline app::NonSerializedFloatUberStateWrapper* create() {
            return il2cpp::create_object<app::NonSerializedFloatUberStateWrapper>(get_class());
        }
    } // namespace NonSerializedFloatUberStateWrapper
} // namespace app::classes::types
