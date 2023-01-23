#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Browser__Array__Class.h>
#include <Modloader/app/structs/Browser__Array.h>

namespace app::classes::types {
    namespace Browser__Array {
        namespace {
            inline app::Browser__Array__Class* type_info_ref = nullptr;
        }
        inline app::Browser__Array__Class** type_info = &type_info_ref;
        inline app::Browser__Array__Class* get_class() {
            return il2cpp::get_class<app::Browser__Array__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Browser[]");
        }
        inline app::Browser__Array* create() {
            return il2cpp::create_object<app::Browser__Array>(get_class());
        }
    } // namespace Browser__Array
} // namespace app::classes::types
