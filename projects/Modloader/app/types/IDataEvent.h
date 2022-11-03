#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IDataEvent {
        namespace {
            inline app::IDataEvent__Class* type_info_ref = nullptr;
        }
        inline app::IDataEvent__Class** type_info = &type_info_ref;
        inline app::IDataEvent__Class* get_class() {
            return il2cpp::get_class<app::IDataEvent__Class>(type_info, "", "IDataEvent");
        }
    } // namespace IDataEvent
} // namespace app::classes::types
