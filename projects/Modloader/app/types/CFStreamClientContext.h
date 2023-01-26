#pragma once
#include <Modloader/app/structs/CFStreamClientContext.h>
#include <Modloader/app/structs/CFStreamClientContext__Boxed.h>
#include <Modloader/app/structs/CFStreamClientContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CFStreamClientContext {
        inline app::CFStreamClientContext__Class** type_info() {
            static app::CFStreamClientContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CFStreamClientContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CFStreamClientContext__Class* get_class() {
            return il2cpp::get_class<app::CFStreamClientContext__Class>(type_info(), "Mono.Net", "CFStreamClientContext");
        }
        inline app::CFStreamClientContext* create() {
            return il2cpp::create_object<app::CFStreamClientContext>(get_class());
        }
        inline app::CFStreamClientContext__Boxed* box(app::CFStreamClientContext value) {
            return il2cpp::box_value<app::CFStreamClientContext__Boxed>(get_class(), value);
        }
    } // namespace CFStreamClientContext
} // namespace app::classes::types
