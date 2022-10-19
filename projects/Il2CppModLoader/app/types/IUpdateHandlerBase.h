#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IUpdateHandlerBase {
        namespace {
            inline app::IUpdateHandlerBase__Class* type_info_ref = nullptr;
        }
        inline app::IUpdateHandlerBase__Class** type_info = &type_info_ref;
        inline app::IUpdateHandlerBase__Class* get_class() {
            return il2cpp::get_class<app::IUpdateHandlerBase__Class>(type_info, "Moon", "IUpdateHandlerBase");
        }
        inline app::IUpdateHandlerBase__Array* create_array(int size) {
            return il2cpp::array_new<app::IUpdateHandlerBase__Array>(get_class(), size);
        }
        inline app::IUpdateHandlerBase__Array* create_array(const std::vector<app::IUpdateHandlerBase*>& items) {
            return il2cpp::array_new<app::IUpdateHandlerBase__Array>(get_class(), items);
        }
    } // namespace IUpdateHandlerBase
} // namespace app::classes::types
