#pragma once
#include <Modloader/app/structs/IRtpcFeed.h>
#include <Modloader/app/structs/IRtpcFeed__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRtpcFeed {
        inline app::IRtpcFeed__Class** type_info() {
            static app::IRtpcFeed__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRtpcFeed__Class**)(modloader::win::memory::resolve_rva(0x0478E628));
            }
            return cache;
        }
        inline app::IRtpcFeed__Class* get_class() {
            return il2cpp::get_class<app::IRtpcFeed__Class>(type_info(), "", "IRtpcFeed");
        }
    } // namespace IRtpcFeed
} // namespace app::classes::types
