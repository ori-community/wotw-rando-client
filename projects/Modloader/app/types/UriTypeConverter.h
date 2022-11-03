#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UriTypeConverter {
        namespace {
            inline app::UriTypeConverter__Class* type_info_ref = nullptr;
        }
        inline app::UriTypeConverter__Class** type_info = &type_info_ref;
        inline app::UriTypeConverter__Class* get_class() {
            return il2cpp::get_class<app::UriTypeConverter__Class>(type_info, "System", "UriTypeConverter");
        }
        inline app::UriTypeConverter* create() {
            return il2cpp::create_object<app::UriTypeConverter>(get_class());
        }
    } // namespace UriTypeConverter
} // namespace app::classes::types
