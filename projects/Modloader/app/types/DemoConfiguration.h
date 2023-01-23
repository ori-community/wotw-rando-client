#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DemoConfiguration__Class.h>
#include <Modloader/app/structs/DemoConfiguration.h>

namespace app::classes::types {
    namespace DemoConfiguration {
        inline app::DemoConfiguration__Class** type_info = (app::DemoConfiguration__Class**)(modloader::win::memory::resolve_rva(0x04732FC0));
        inline app::DemoConfiguration__Class* get_class() {
            return il2cpp::get_class<app::DemoConfiguration__Class>(type_info, "", "DemoConfiguration");
        }
        inline app::DemoConfiguration* create() {
            return il2cpp::create_object<app::DemoConfiguration>(get_class());
        }
    } // namespace DemoConfiguration
} // namespace app::classes::types
