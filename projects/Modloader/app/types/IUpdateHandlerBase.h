#pragma once
#include <Modloader/app/structs/IUpdateHandlerBase.h>
#include <Modloader/app/structs/IUpdateHandlerBase__Array.h>
#include <Modloader/app/structs/IUpdateHandlerBase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUpdateHandlerBase {
        inline app::IUpdateHandlerBase__Class** type_info() {
            static app::IUpdateHandlerBase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IUpdateHandlerBase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IUpdateHandlerBase__Class* get_class() {
            return il2cpp::get_class<app::IUpdateHandlerBase__Class>(type_info(), "Moon", "IUpdateHandlerBase");
        }
        inline app::IUpdateHandlerBase__Array* create_array(int size) {
            return il2cpp::array_new<app::IUpdateHandlerBase__Array>(get_class(), size);
        }
        inline app::IUpdateHandlerBase__Array* create_array(const std::vector<app::IUpdateHandlerBase*>& items) {
            return il2cpp::array_new<app::IUpdateHandlerBase__Array>(get_class(), items);
        }
    } // namespace IUpdateHandlerBase
} // namespace app::classes::types
