#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnityTlsProvider__Class.h>
#include <Modloader/app/structs/UnityTlsProvider.h>

namespace app::classes::types {
    namespace UnityTlsProvider {
        namespace {
            inline app::UnityTlsProvider__Class* type_info_ref = nullptr;
        }
        inline app::UnityTlsProvider__Class** type_info = &type_info_ref;
        inline app::UnityTlsProvider__Class* get_class() {
            return il2cpp::get_class<app::UnityTlsProvider__Class>(type_info, "Mono.Unity", "UnityTlsProvider");
        }
        inline app::UnityTlsProvider* create() {
            return il2cpp::create_object<app::UnityTlsProvider>(get_class());
        }
    } // namespace UnityTlsProvider
} // namespace app::classes::types
