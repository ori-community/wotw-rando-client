#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ResourceLocator {
        namespace {
            inline app::ResourceLocator__Class* type_info_ref = nullptr;
        }
        inline app::ResourceLocator__Class** type_info = &type_info_ref;
        inline app::ResourceLocator__Class* get_class() {
            return il2cpp::get_class<app::ResourceLocator__Class>(type_info, "System.Resources", "ResourceLocator");
        }
        inline app::ResourceLocator* create() {
            return il2cpp::create_object<app::ResourceLocator>(get_class());
        }
        inline app::ResourceLocator__Boxed* box(app::ResourceLocator value) {
            return il2cpp::box_value<app::ResourceLocator__Boxed>(get_class(), value);
        }
        inline app::ResourceLocator__Array* create_array(int size) {
            return il2cpp::array_new<app::ResourceLocator__Array>(get_class(), size);
        }
        inline app::ResourceLocator__Array* create_array(const std::vector<app::ResourceLocator>& items) {
            return il2cpp::array_new<app::ResourceLocator__Array>(get_class(), items);
        }
    } // namespace ResourceLocator
} // namespace app::classes::types
