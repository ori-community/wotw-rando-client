#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialBasedResourceMapEntry__Array {
        namespace {
            inline app::MaterialBasedResourceMapEntry__Array__Class* type_info_ref = nullptr;
        }
        inline app::MaterialBasedResourceMapEntry__Array__Class** type_info = &type_info_ref;
        inline app::MaterialBasedResourceMapEntry__Array__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedResourceMapEntry__Array__Class>(type_info, "", "MaterialBasedResourceMapEntry[]");
        }
        inline app::MaterialBasedResourceMapEntry__Array* create() {
            return il2cpp::create_object<app::MaterialBasedResourceMapEntry__Array>(get_class());
        }
    } // namespace MaterialBasedResourceMapEntry__Array
} // namespace app::classes::types
