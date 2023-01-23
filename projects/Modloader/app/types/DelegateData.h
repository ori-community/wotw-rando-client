#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DelegateData__Class.h>
#include <Modloader/app/structs/DelegateData.h>

namespace app::classes::types {
    namespace DelegateData {
        inline app::DelegateData__Class** type_info = (app::DelegateData__Class**)(modloader::win::memory::resolve_rva(0x04756AB0));
        inline app::DelegateData__Class* get_class() {
            return il2cpp::get_class<app::DelegateData__Class>(type_info, "System", "DelegateData");
        }
        inline app::DelegateData* create() {
            return il2cpp::create_object<app::DelegateData>(get_class());
        }
    } // namespace DelegateData
} // namespace app::classes::types
