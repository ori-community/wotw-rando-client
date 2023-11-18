#pragma once
#include <Modloader/app/structs/NonSerializedByteUberStateWrapper.h>
#include <Modloader/app/structs/NonSerializedByteUberStateWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NonSerializedByteUberStateWrapper {
        inline app::NonSerializedByteUberStateWrapper__Class** type_info() {
            static app::NonSerializedByteUberStateWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NonSerializedByteUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x0475B368));
            }
            return cache;
        }
        inline app::NonSerializedByteUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::NonSerializedByteUberStateWrapper__Class>(type_info(), "Moon.UberStateVisualization", "NonSerializedByteUberStateWrapper");
        }
        inline app::NonSerializedByteUberStateWrapper* create() {
            return il2cpp::create_object<app::NonSerializedByteUberStateWrapper>(get_class());
        }
    } // namespace NonSerializedByteUberStateWrapper
} // namespace app::classes::types
