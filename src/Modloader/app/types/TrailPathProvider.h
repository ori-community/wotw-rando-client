#pragma once
#include <Modloader/app/structs/TrailPathProvider.h>
#include <Modloader/app/structs/TrailPathProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrailPathProvider {
        inline app::TrailPathProvider__Class** type_info() {
            static app::TrailPathProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TrailPathProvider__Class**)(modloader::win::memory::resolve_rva(0x04798F10));
            }
            return cache;
        }
        inline app::TrailPathProvider__Class* get_class() {
            return il2cpp::get_class<app::TrailPathProvider__Class>(type_info(), "", "TrailPathProvider");
        }
    } // namespace TrailPathProvider
} // namespace app::classes::types
