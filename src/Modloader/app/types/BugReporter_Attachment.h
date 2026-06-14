#pragma once
#include <Modloader/app/structs/BugReporter_Attachment.h>
#include <Modloader/app/structs/BugReporter_Attachment__Array.h>
#include <Modloader/app/structs/BugReporter_Attachment__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BugReporter_Attachment {
        inline app::BugReporter_Attachment__Class** type_info() {
            static app::BugReporter_Attachment__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BugReporter_Attachment__Class**)(modloader::win::memory::resolve_rva(0x047992C0));
            }
            return cache;
        }
        inline app::BugReporter_Attachment__Class* get_class() {
            return il2cpp::get_nested_class<app::BugReporter_Attachment__Class>(type_info(), "", "BugReporter", "Attachment");
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
