#pragma once
#include <Modloader/app/structs/IServerRecordableObject.h>
#include <Modloader/app/structs/IServerRecordableObject__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IServerRecordableObject {
        inline app::IServerRecordableObject__Class** type_info() {
            static app::IServerRecordableObject__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IServerRecordableObject__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IServerRecordableObject__Class* get_class() {
            return il2cpp::get_class<app::IServerRecordableObject__Class>(type_info(), "", "IServerRecordableObject");
        }
    } // namespace IServerRecordableObject
} // namespace app::classes::types
