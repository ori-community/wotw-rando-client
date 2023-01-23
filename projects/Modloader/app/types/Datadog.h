#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Datadog__Class.h>
#include <Modloader/app/structs/Datadog.h>

namespace app::classes::types {
    namespace Datadog {
        inline app::Datadog__Class** type_info = (app::Datadog__Class**)(modloader::win::memory::resolve_rva(0x04779A70));
        inline app::Datadog__Class* get_class() {
            return il2cpp::get_class<app::Datadog__Class>(type_info, "", "Datadog");
        }
        inline app::Datadog* create() {
            return il2cpp::create_object<app::Datadog>(get_class());
        }
    } // namespace Datadog
} // namespace app::classes::types
