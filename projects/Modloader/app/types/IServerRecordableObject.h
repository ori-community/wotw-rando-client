#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IServerRecordableObject {
        namespace {
            inline app::IServerRecordableObject__Class* type_info_ref = nullptr;
        }
        inline app::IServerRecordableObject__Class** type_info = &type_info_ref;
        inline app::IServerRecordableObject__Class* get_class() {
            return il2cpp::get_class<app::IServerRecordableObject__Class>(type_info, "", "IServerRecordableObject");
        }
    } // namespace IServerRecordableObject
} // namespace app::classes::types
