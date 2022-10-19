#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ISerializedSetupObserver {
        namespace {
            inline app::ISerializedSetupObserver__Class* type_info_ref = nullptr;
        }
        inline app::ISerializedSetupObserver__Class** type_info = &type_info_ref;
        inline app::ISerializedSetupObserver__Class* get_class() {
            return il2cpp::get_class<app::ISerializedSetupObserver__Class>(type_info, "", "ISerializedSetupObserver");
        }
        inline app::ISerializedSetupObserver__Array* create_array(int size) {
            return il2cpp::array_new<app::ISerializedSetupObserver__Array>(get_class(), size);
        }
        inline app::ISerializedSetupObserver__Array* create_array(const std::vector<app::ISerializedSetupObserver*>& items) {
            return il2cpp::array_new<app::ISerializedSetupObserver__Array>(get_class(), items);
        }
    } // namespace ISerializedSetupObserver
} // namespace app::classes::types
