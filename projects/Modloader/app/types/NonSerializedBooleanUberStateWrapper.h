#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NonSerializedBooleanUberStateWrapper__Class.h>
#include <Modloader/app/structs/NonSerializedBooleanUberStateWrapper.h>

namespace app::classes::types {
    namespace NonSerializedBooleanUberStateWrapper {
        inline app::NonSerializedBooleanUberStateWrapper__Class** type_info = (app::NonSerializedBooleanUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x047750E8));
        inline app::NonSerializedBooleanUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::NonSerializedBooleanUberStateWrapper__Class>(type_info, "Moon.UberStateVisualization", "NonSerializedBooleanUberStateWrapper");
        }
        inline app::NonSerializedBooleanUberStateWrapper* create() {
            return il2cpp::create_object<app::NonSerializedBooleanUberStateWrapper>(get_class());
        }
    } // namespace NonSerializedBooleanUberStateWrapper
} // namespace app::classes::types
