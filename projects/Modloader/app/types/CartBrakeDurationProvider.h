#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CartBrakeDurationProvider {
        namespace {
            inline app::CartBrakeDurationProvider__Class* type_info_ref = nullptr;
        }
        inline app::CartBrakeDurationProvider__Class** type_info = &type_info_ref;
        inline app::CartBrakeDurationProvider__Class* get_class() {
            return il2cpp::get_class<app::CartBrakeDurationProvider__Class>(type_info, "", "CartBrakeDurationProvider");
        }
        inline app::CartBrakeDurationProvider* create() {
            return il2cpp::create_object<app::CartBrakeDurationProvider>(get_class());
        }
    } // namespace CartBrakeDurationProvider
} // namespace app::classes::types
