#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BypassElementCollection__Class.h>
#include <Modloader/app/structs/BypassElementCollection.h>

namespace app::classes::types {
    namespace BypassElementCollection {
        namespace {
            inline app::BypassElementCollection__Class* type_info_ref = nullptr;
        }
        inline app::BypassElementCollection__Class** type_info = &type_info_ref;
        inline app::BypassElementCollection__Class* get_class() {
            return il2cpp::get_class<app::BypassElementCollection__Class>(type_info, "System.Net.Configuration", "BypassElementCollection");
        }
        inline app::BypassElementCollection* create() {
            return il2cpp::create_object<app::BypassElementCollection>(get_class());
        }
    } // namespace BypassElementCollection
} // namespace app::classes::types
