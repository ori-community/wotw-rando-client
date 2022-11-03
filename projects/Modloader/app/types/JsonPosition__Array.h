#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace JsonPosition__Array {
        namespace {
            inline app::JsonPosition__Array__Class* type_info_ref = nullptr;
        }
        inline app::JsonPosition__Array__Class** type_info = &type_info_ref;
        inline app::JsonPosition__Array__Class* get_class() {
            return il2cpp::get_class<app::JsonPosition__Array__Class>(type_info, "Newtonsoft.Json", "JsonPosition[]");
        }
        inline app::JsonPosition__Array* create() {
            return il2cpp::create_object<app::JsonPosition__Array>(get_class());
        }
    } // namespace JsonPosition__Array
} // namespace app::classes::types
