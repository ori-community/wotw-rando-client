#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/MonoLocalCertificateSelectionCallback__Class.h>
#include <Modloader/app/structs/MonoLocalCertificateSelectionCallback.h>

namespace app::classes::types {
    namespace MonoLocalCertificateSelectionCallback {
        namespace {
            inline app::MonoLocalCertificateSelectionCallback__Class* type_info_ref = nullptr;
        }
        inline app::MonoLocalCertificateSelectionCallback__Class** type_info = &type_info_ref;
        inline app::MonoLocalCertificateSelectionCallback__Class* get_class() {
            return il2cpp::get_class<app::MonoLocalCertificateSelectionCallback__Class>(type_info, "Mono.Security.Interface", "MonoLocalCertificateSelectionCallback");
        }
        inline app::MonoLocalCertificateSelectionCallback* create() {
            return il2cpp::create_object<app::MonoLocalCertificateSelectionCallback>(get_class());
        }
    } // namespace MonoLocalCertificateSelectionCallback
} // namespace app::classes::types
