#pragma once
#include <Modloader/app/structs/MetaData.h>
#include <Modloader/app/structs/MetaData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MetaData {
        inline app::MetaData__Class** type_info() {
            static app::MetaData__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MetaData__Class**)(modloader::win::memory::resolve_rva(0x0472A310));
            }
            return cache;
        }
        inline app::MetaData__Class* get_class() {
            return il2cpp::get_class<app::MetaData__Class>(type_info(), "UnityEngine.Profiling.Memory.Experimental", "MetaData");
        }
        inline app::MetaData* create() {
            return il2cpp::create_object<app::MetaData>(get_class());
        }
    } // namespace MetaData
} // namespace app::classes::types
