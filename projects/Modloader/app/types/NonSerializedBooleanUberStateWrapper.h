#pragma once
#include <Modloader/app/structs/NonSerializedBooleanUberStateWrapper.h>
#include <Modloader/app/structs/NonSerializedBooleanUberStateWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NonSerializedBooleanUberStateWrapper {
        inline app::NonSerializedBooleanUberStateWrapper__Class** type_info() {
            static app::NonSerializedBooleanUberStateWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NonSerializedBooleanUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x047750E8));
            }
            return cache;
        }
        inline app::NonSerializedBooleanUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::NonSerializedBooleanUberStateWrapper__Class>(type_info(), "Moon.UberStateVisualization", "NonSerializedBooleanUberStateWrapper");
        }
        inline app::NonSerializedBooleanUberStateWrapper* create() {
            return il2cpp::create_object<app::NonSerializedBooleanUberStateWrapper>(get_class());
        }
    } // namespace NonSerializedBooleanUberStateWrapper
} // namespace app::classes::types
