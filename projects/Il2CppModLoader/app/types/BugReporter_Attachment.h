#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BugReporter_Attachment {
        extern IL2CPP_MODLOADER_DLLEXPORT app::BugReporter_Attachment__Class** type_info;
        inline app::BugReporter_Attachment__Class* get_class() {
            return il2cpp::get_nested_class<app::BugReporter_Attachment__Class>(type_info, "", "BugReporter", "Attachment");
        }
        inline app::BugReporter_Attachment* create() {
            return il2cpp::create_object<app::BugReporter_Attachment>(get_class());
        }
        inline app::BugReporter_Attachment__Array* create_array(int size) {
            return il2cpp::array_new<app::BugReporter_Attachment__Array>(get_class(), size);
        }
        inline app::BugReporter_Attachment__Array* create_array(const std::vector<app::BugReporter_Attachment*>& items) {
            return il2cpp::array_new<app::BugReporter_Attachment__Array>(get_class(), items);
        }
    } // namespace BugReporter_Attachment
} // namespace app::classes::types
