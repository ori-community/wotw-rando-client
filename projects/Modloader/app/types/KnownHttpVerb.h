#pragma once
#include <Modloader/app/structs/KnownHttpVerb.h>
#include <Modloader/app/structs/KnownHttpVerb__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KnownHttpVerb {
        inline app::KnownHttpVerb__Class** type_info() {
            static app::KnownHttpVerb__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KnownHttpVerb__Class**)(modloader::win::memory::resolve_rva(0x04781AC8));
            }
            return cache;
        }
        inline app::KnownHttpVerb__Class* get_class() {
            return il2cpp::get_class<app::KnownHttpVerb__Class>(type_info(), "System.Net", "KnownHttpVerb");
        }
        inline app::KnownHttpVerb* create() {
            return il2cpp::create_object<app::KnownHttpVerb>(get_class());
        }
    } // namespace KnownHttpVerb
} // namespace app::classes::types
