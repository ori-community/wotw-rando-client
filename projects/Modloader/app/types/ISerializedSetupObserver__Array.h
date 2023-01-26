#pragma once
#include <Modloader/app/structs/ISerializedSetupObserver__Array.h>
#include <Modloader/app/structs/ISerializedSetupObserver__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISerializedSetupObserver__Array {
        inline app::ISerializedSetupObserver__Array__Class** type_info() {
            static app::ISerializedSetupObserver__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISerializedSetupObserver__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISerializedSetupObserver__Array__Class* get_class() {
            return il2cpp::get_class<app::ISerializedSetupObserver__Array__Class>(type_info(), "", "ISerializedSetupObserver[]");
        }
        inline app::ISerializedSetupObserver__Array* create() {
            return il2cpp::create_object<app::ISerializedSetupObserver__Array>(get_class());
        }
    } // namespace ISerializedSetupObserver__Array
} // namespace app::classes::types
