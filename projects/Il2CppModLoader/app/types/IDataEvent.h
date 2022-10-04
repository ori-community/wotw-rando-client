#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IDataEvent {
        namespace {
            app::IDataEvent__Class* type_info_ref = nullptr;
        }
        app::IDataEvent__Class** type_info = &type_info_ref;
        inline app::IDataEvent__Class* get_class() {
            return il2cpp::get_class<app::IDataEvent__Class>(type_info, "", "IDataEvent");
        }
        inline app::IDataEvent* create() {
            return il2cpp::create_object<app::IDataEvent>(get_class());
        }
    } // namespace IDataEvent
} // namespace app::classes::types
