#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PromiseTimer {
        namespace {
            inline app::PromiseTimer__Class* type_info_ref = nullptr;
        }
        inline app::PromiseTimer__Class** type_info = &type_info_ref;
        inline app::PromiseTimer__Class* get_class() {
            return il2cpp::get_class<app::PromiseTimer__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PromiseTimer");
        }
        inline app::PromiseTimer* create() {
            return il2cpp::create_object<app::PromiseTimer>(get_class());
        }
    } // namespace PromiseTimer
} // namespace app::classes::types
