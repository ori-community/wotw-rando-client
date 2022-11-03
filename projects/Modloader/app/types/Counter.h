#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Counter {
        namespace {
            inline app::Counter__Class* type_info_ref = nullptr;
        }
        inline app::Counter__Class** type_info = &type_info_ref;
        inline app::Counter__Class* get_class() {
            return il2cpp::get_class<app::Counter__Class>(type_info, "", "Counter");
        }
        inline app::Counter* create() {
            return il2cpp::create_object<app::Counter>(get_class());
        }
    } // namespace Counter
} // namespace app::classes::types
