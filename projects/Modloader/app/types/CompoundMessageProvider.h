#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CompoundMessageProvider {
        namespace {
            inline app::CompoundMessageProvider__Class* type_info_ref = nullptr;
        }
        inline app::CompoundMessageProvider__Class** type_info = &type_info_ref;
        inline app::CompoundMessageProvider__Class* get_class() {
            return il2cpp::get_class<app::CompoundMessageProvider__Class>(type_info, "", "CompoundMessageProvider");
        }
        inline app::CompoundMessageProvider* create() {
            return il2cpp::create_object<app::CompoundMessageProvider>(get_class());
        }
    } // namespace CompoundMessageProvider
} // namespace app::classes::types
