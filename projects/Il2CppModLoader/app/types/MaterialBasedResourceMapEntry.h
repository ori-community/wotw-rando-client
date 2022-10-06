#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaterialBasedResourceMapEntry {
        namespace {
            app::MaterialBasedResourceMapEntry__Class* type_info_ref = nullptr;
        }
        app::MaterialBasedResourceMapEntry__Class** type_info = &type_info_ref;
        inline app::MaterialBasedResourceMapEntry__Class* get_class() {
            return il2cpp::get_class<app::MaterialBasedResourceMapEntry__Class>(type_info, "", "MaterialBasedResourceMapEntry");
        }
        inline app::MaterialBasedResourceMapEntry* create() {
            return il2cpp::create_object<app::MaterialBasedResourceMapEntry>(get_class());
        }
        inline app::MaterialBasedResourceMapEntry__Array* create_array(int size) {
            return il2cpp::array_new<app::MaterialBasedResourceMapEntry__Array>(get_class(), size);
        }
        inline app::MaterialBasedResourceMapEntry__Array* create_array(const std::vector<app::MaterialBasedResourceMapEntry*>& items) {
            return il2cpp::array_new<app::MaterialBasedResourceMapEntry__Array>(get_class(), items);
        }
    } // namespace MaterialBasedResourceMapEntry
} // namespace app::classes::types
