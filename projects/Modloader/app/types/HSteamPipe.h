#pragma once
#include <Modloader/app/structs/HSteamPipe.h>
#include <Modloader/app/structs/HSteamPipe__Boxed.h>
#include <Modloader/app/structs/HSteamPipe__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HSteamPipe {
        inline app::HSteamPipe__Class** type_info() {
            static app::HSteamPipe__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::HSteamPipe__Class**)(modloader::win::memory::resolve_rva(0x04730358));
            }
            return cache;
        }
        inline app::HSteamPipe__Class* get_class() {
            return il2cpp::get_class<app::HSteamPipe__Class>(type_info(), "Steamworks", "HSteamPipe");
        }
        inline app::HSteamPipe* create() {
            return il2cpp::create_object<app::HSteamPipe>(get_class());
        }
        inline app::HSteamPipe__Boxed* box(app::HSteamPipe value) {
            return il2cpp::box_value<app::HSteamPipe__Boxed>(get_class(), value);
        }
    } // namespace HSteamPipe
} // namespace app::classes::types
