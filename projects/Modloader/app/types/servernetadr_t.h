#pragma once
#include <Modloader/app/structs/servernetadr_t.h>
#include <Modloader/app/structs/servernetadr_t__Boxed.h>
#include <Modloader/app/structs/servernetadr_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace servernetadr_t {
        inline app::servernetadr_t__Class** type_info() {
            static app::servernetadr_t__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::servernetadr_t__Class**)(modloader::win::memory::resolve_rva(0x0476CF90));
            }
            return cache;
        }
        inline app::servernetadr_t__Class* get_class() {
            return il2cpp::get_class<app::servernetadr_t__Class>(type_info(), "Steamworks", "servernetadr_t");
        }
        inline app::servernetadr_t* create() {
            return il2cpp::create_object<app::servernetadr_t>(get_class());
        }
        inline app::servernetadr_t__Boxed* box(app::servernetadr_t value) {
            return il2cpp::box_value<app::servernetadr_t__Boxed>(get_class(), value);
        }
    } // namespace servernetadr_t
} // namespace app::classes::types
