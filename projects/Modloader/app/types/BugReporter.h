#pragma once
#include <Modloader/app/structs/BugReporter.h>
#include <Modloader/app/structs/BugReporter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BugReporter {
        inline app::BugReporter__Class** type_info() {
            static app::BugReporter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BugReporter__Class**)(modloader::win::memory::resolve_rva(0x0478DFA0));
            }
            return cache;
        }
        inline app::BugReporter__Class* get_class() {
            return il2cpp::get_class<app::BugReporter__Class>(type_info(), "", "BugReporter");
        }
        inline app::BugReporter* create() {
            return il2cpp::create_object<app::BugReporter>(get_class());
        }
    } // namespace BugReporter
} // namespace app::classes::types
