#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SafeStringMarshal {
        namespace {
            inline app::SafeStringMarshal__Class* type_info_ref = nullptr;
        }
        inline app::SafeStringMarshal__Class** type_info = &type_info_ref;
        inline app::SafeStringMarshal__Class* get_class() {
            return il2cpp::get_class<app::SafeStringMarshal__Class>(type_info, "Mono", "SafeStringMarshal");
        }
        inline app::SafeStringMarshal* create() {
            return il2cpp::create_object<app::SafeStringMarshal>(get_class());
        }
        inline app::SafeStringMarshal__Boxed* box(app::SafeStringMarshal value) {
            return il2cpp::box_value<app::SafeStringMarshal__Boxed>(get_class(), value);
        }
    } // namespace SafeStringMarshal
} // namespace app::classes::types
