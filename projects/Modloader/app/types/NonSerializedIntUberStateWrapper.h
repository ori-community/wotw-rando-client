#pragma once
#include <Modloader/app/structs/NonSerializedIntUberStateWrapper.h>
#include <Modloader/app/structs/NonSerializedIntUberStateWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NonSerializedIntUberStateWrapper {
        inline app::NonSerializedIntUberStateWrapper__Class** type_info() {
            static app::NonSerializedIntUberStateWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::NonSerializedIntUberStateWrapper__Class**)(modloader::win::memory::resolve_rva(0x04720AF8));
            }
            return cache;
        }
        inline app::NonSerializedIntUberStateWrapper__Class* get_class() {
            return il2cpp::get_class<app::NonSerializedIntUberStateWrapper__Class>(type_info(), "Moon.UberStateVisualization", "NonSerializedIntUberStateWrapper");
        }
        inline app::NonSerializedIntUberStateWrapper* create() {
            return il2cpp::create_object<app::NonSerializedIntUberStateWrapper>(get_class());
        }
    } // namespace NonSerializedIntUberStateWrapper
} // namespace app::classes::types
