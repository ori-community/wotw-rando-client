#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace NotNull {
        namespace {
            inline app::NotNull__Class* type_info_ref = nullptr;
        }
        inline app::NotNull__Class** type_info = &type_info_ref;
        inline app::NotNull__Class* get_class() {
            return il2cpp::get_class<app::NotNull__Class>(type_info, "", "NotNull");
        }
        inline app::NotNull* create() {
            return il2cpp::create_object<app::NotNull>(get_class());
        }
    } // namespace NotNull
} // namespace app::classes::types
