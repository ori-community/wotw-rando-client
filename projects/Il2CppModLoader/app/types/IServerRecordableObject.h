#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IServerRecordableObject {
        namespace {
            app::IServerRecordableObject__Class* type_info_ref = nullptr;
        }
        app::IServerRecordableObject__Class** type_info = &type_info_ref;
        inline app::IServerRecordableObject__Class* get_class() {
            return il2cpp::get_class<app::IServerRecordableObject__Class>(type_info, "", "IServerRecordableObject");
        }
        inline app::IServerRecordableObject* create() {
            return il2cpp::create_object<app::IServerRecordableObject>(get_class());
        }
    } // namespace IServerRecordableObject
} // namespace app::classes::types
