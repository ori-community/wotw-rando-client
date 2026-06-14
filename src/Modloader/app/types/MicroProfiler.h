#pragma once
#include <Modloader/app/structs/MicroProfiler.h>
#include <Modloader/app/structs/MicroProfiler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MicroProfiler {
        inline app::MicroProfiler__Class** type_info() {
            static app::MicroProfiler__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MicroProfiler__Class**)(modloader::win::memory::resolve_rva(0x04768898));
            }
            return cache;
        }
        inline app::MicroProfiler__Class* get_class() {
            return il2cpp::get_class<app::MicroProfiler__Class>(type_info(), "", "MicroProfiler");
        }
        inline app::MicroProfiler* create() {
            return il2cpp::create_object<app::MicroProfiler>(get_class());
        }
    } // namespace MicroProfiler
} // namespace app::classes::types
