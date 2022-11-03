#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LeakLocator {
        namespace {
            inline app::LeakLocator__Class* type_info_ref = nullptr;
        }
        inline app::LeakLocator__Class** type_info = &type_info_ref;
        inline app::LeakLocator__Class* get_class() {
            return il2cpp::get_class<app::LeakLocator__Class>(type_info, "", "LeakLocator");
        }
        inline app::LeakLocator* create() {
            return il2cpp::create_object<app::LeakLocator>(get_class());
        }
    } // namespace LeakLocator
} // namespace app::classes::types
