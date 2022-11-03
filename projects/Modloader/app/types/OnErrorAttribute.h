#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OnErrorAttribute {
        namespace {
            inline app::OnErrorAttribute__Class* type_info_ref = nullptr;
        }
        inline app::OnErrorAttribute__Class** type_info = &type_info_ref;
        inline app::OnErrorAttribute__Class* get_class() {
            return il2cpp::get_class<app::OnErrorAttribute__Class>(type_info, "Newtonsoft.Json.Serialization", "OnErrorAttribute");
        }
        inline app::OnErrorAttribute* create() {
            return il2cpp::create_object<app::OnErrorAttribute>(get_class());
        }
    } // namespace OnErrorAttribute
} // namespace app::classes::types
