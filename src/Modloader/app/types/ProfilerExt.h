#pragma once
#include <Modloader/app/structs/ProfilerExt.h>
#include <Modloader/app/structs/ProfilerExt__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProfilerExt {
        inline app::ProfilerExt__Class** type_info() {
            static app::ProfilerExt__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ProfilerExt__Class**)(modloader::win::memory::resolve_rva(0x04791310));
            }
            return cache;
        }
        inline app::ProfilerExt__Class* get_class() {
            return il2cpp::get_class<app::ProfilerExt__Class>(type_info(), "Moon.Rendering", "ProfilerExt");
        }
        inline app::ProfilerExt* create() {
            return il2cpp::create_object<app::ProfilerExt>(get_class());
        }
    } // namespace ProfilerExt
} // namespace app::classes::types
