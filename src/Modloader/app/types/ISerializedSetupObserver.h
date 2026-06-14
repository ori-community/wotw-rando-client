#pragma once
#include <Modloader/app/structs/ISerializedSetupObserver.h>
#include <Modloader/app/structs/ISerializedSetupObserver__Array.h>
#include <Modloader/app/structs/ISerializedSetupObserver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ISerializedSetupObserver {
        inline app::ISerializedSetupObserver__Class** type_info() {
            static app::ISerializedSetupObserver__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ISerializedSetupObserver__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ISerializedSetupObserver__Class* get_class() {
            return il2cpp::get_class<app::ISerializedSetupObserver__Class>(type_info(), "", "ISerializedSetupObserver");
        }
        inline app::ISerializedSetupObserver__Array* create_array(int size) {
            return il2cpp::array_new<app::ISerializedSetupObserver__Array>(get_class(), size);
        }
        inline app::ISerializedSetupObserver__Array* create_array(const std::vector<app::ISerializedSetupObserver*>& items) {
            return il2cpp::array_new<app::ISerializedSetupObserver__Array>(get_class(), items);
        }
    } // namespace ISerializedSetupObserver
} // namespace app::classes::types
