#pragma once
#include <Modloader/app/structs/DataBundle.h>
#include <Modloader/app/structs/DataBundle__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataBundle {
        inline app::DataBundle__Class** type_info() {
            static app::DataBundle__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DataBundle__Class**)(modloader::win::memory::resolve_rva(0x04757028));
            }
            return cache;
        }
        inline app::DataBundle__Class* get_class() {
            return il2cpp::get_class<app::DataBundle__Class>(type_info(), "Moon.Telemetry.Performance", "DataBundle");
        }
        inline app::DataBundle* create() {
            return il2cpp::create_object<app::DataBundle>(get_class());
        }
    } // namespace DataBundle
} // namespace app::classes::types
