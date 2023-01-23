#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CFStreamClientContext__Class.h>
#include <Modloader/app/structs/CFStreamClientContext.h>
#include <Modloader/app/structs/CFStreamClientContext__Boxed.h>

namespace app::classes::types {
    namespace CFStreamClientContext {
        namespace {
            inline app::CFStreamClientContext__Class* type_info_ref = nullptr;
        }
        inline app::CFStreamClientContext__Class** type_info = &type_info_ref;
        inline app::CFStreamClientContext__Class* get_class() {
            return il2cpp::get_class<app::CFStreamClientContext__Class>(type_info, "Mono.Net", "CFStreamClientContext");
        }
        inline app::CFStreamClientContext* create() {
            return il2cpp::create_object<app::CFStreamClientContext>(get_class());
        }
        inline app::CFStreamClientContext__Boxed* box(app::CFStreamClientContext value) {
            return il2cpp::box_value<app::CFStreamClientContext__Boxed>(get_class(), value);
        }
    } // namespace CFStreamClientContext
} // namespace app::classes::types
