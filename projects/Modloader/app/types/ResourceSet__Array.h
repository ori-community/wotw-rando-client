#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResourceSet__Array {
        namespace {
            inline app::ResourceSet__Array__Class* type_info_ref = nullptr;
        }
        inline app::ResourceSet__Array__Class** type_info = &type_info_ref;
        inline app::ResourceSet__Array__Class* get_class() {
            return il2cpp::get_class<app::ResourceSet__Array__Class>(type_info, "System.Resources", "ResourceSet[]");
        }
        inline app::ResourceSet__Array* create() {
            return il2cpp::create_object<app::ResourceSet__Array>(get_class());
        }
    } // namespace ResourceSet__Array
} // namespace app::classes::types
