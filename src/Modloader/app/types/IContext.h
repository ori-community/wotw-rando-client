#pragma once
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/IContext__Array.h>
#include <Modloader/app/structs/IContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IContext {
        inline app::IContext__Class** type_info() {
            static app::IContext__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IContext__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IContext__Class* get_class() {
            return il2cpp::get_class<app::IContext__Class>(type_info(), "", "IContext");
        }
        inline app::IContext__Array* create_array(int size) {
            return il2cpp::array_new<app::IContext__Array>(get_class(), size);
        }
        inline app::IContext__Array* create_array(const std::vector<app::IContext*>& items) {
            return il2cpp::array_new<app::IContext__Array>(get_class(), items);
        }
    } // namespace IContext
} // namespace app::classes::types
