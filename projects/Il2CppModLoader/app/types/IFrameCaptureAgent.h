#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFrameCaptureAgent {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IFrameCaptureAgent__Class** type_info;
        inline app::IFrameCaptureAgent__Class* get_class() {
            return il2cpp::get_class<app::IFrameCaptureAgent__Class>(type_info, "", "IFrameCaptureAgent");
        }
        inline app::IFrameCaptureAgent__Array* create_array(int size) {
            return il2cpp::array_new<app::IFrameCaptureAgent__Array>(get_class(), size);
        }
        inline app::IFrameCaptureAgent__Array* create_array(const std::vector<app::IFrameCaptureAgent*>& items) {
            return il2cpp::array_new<app::IFrameCaptureAgent__Array>(get_class(), items);
        }
    } // namespace IFrameCaptureAgent
} // namespace app::classes::types
