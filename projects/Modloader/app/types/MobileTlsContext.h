#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MobileTlsContext {
        namespace {
            inline app::MobileTlsContext__Class* type_info_ref = nullptr;
        }
        inline app::MobileTlsContext__Class** type_info = &type_info_ref;
        inline app::MobileTlsContext__Class* get_class() {
            return il2cpp::get_class<app::MobileTlsContext__Class>(type_info, "Mono.Net.Security", "MobileTlsContext");
        }
        inline app::MobileTlsContext* create() {
            return il2cpp::create_object<app::MobileTlsContext>(get_class());
        }
    } // namespace MobileTlsContext
} // namespace app::classes::types
