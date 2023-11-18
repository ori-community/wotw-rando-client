#pragma once
#include <Modloader/app/structs/SNetSocket_t.h>
#include <Modloader/app/structs/SNetSocket_t__Boxed.h>
#include <Modloader/app/structs/SNetSocket_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SNetSocket_t {
        inline app::SNetSocket_t__Class** type_info() {
            static app::SNetSocket_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SNetSocket_t__Class**)(modloader::win::memory::resolve_rva(0x0473AF98));
            }
            return cache;
        }
        inline app::SNetSocket_t__Class* get_class() {
            return il2cpp::get_class<app::SNetSocket_t__Class>(type_info(), "Steamworks", "SNetSocket_t");
        }
        inline app::SNetSocket_t* create() {
            return il2cpp::create_object<app::SNetSocket_t>(get_class());
        }
        inline app::SNetSocket_t__Boxed* box(app::SNetSocket_t value) {
            return il2cpp::box_value<app::SNetSocket_t__Boxed>(get_class(), value);
        }
    } // namespace SNetSocket_t
} // namespace app::classes::types
