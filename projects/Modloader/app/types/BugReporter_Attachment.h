#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BugReporter_Attachment {
        inline app::BugReporter_Attachment__Class** type_info = (app::BugReporter_Attachment__Class**)(modloader::win::memory::resolve_rva(0x047992C0));
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
