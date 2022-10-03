#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BugReporter_Attachment__Array {
        namespace {
            app::BugReporter_Attachment__Array__Class* type_info_ref = nullptr;
        }
        app::BugReporter_Attachment__Array__Class** type_info = &type_info_ref;
        inline app::BugReporter_Attachment__Array__Class* get_class() {
            return il2cpp::get_class<app::BugReporter_Attachment__Array__Class>(type_info, "", "BugReporter+Attachment[]");
        }
        inline app::BugReporter_Attachment__Array* create() {
            return il2cpp::create_object<app::BugReporter_Attachment__Array>(get_class());
        }
    } // namespace BugReporter_Attachment__Array
} // namespace app::classes::types
