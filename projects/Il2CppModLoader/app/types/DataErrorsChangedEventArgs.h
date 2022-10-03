#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace DataErrorsChangedEventArgs {
        namespace {
            app::DataErrorsChangedEventArgs__Class* type_info_ref = nullptr;
        }
        app::DataErrorsChangedEventArgs__Class** type_info = &type_info_ref;
        inline app::DataErrorsChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DataErrorsChangedEventArgs__Class>(type_info, "System.ComponentModel", "DataErrorsChangedEventArgs");
        }
        inline app::DataErrorsChangedEventArgs* create() {
            return il2cpp::create_object<app::DataErrorsChangedEventArgs>(get_class());
        }
    } // namespace DataErrorsChangedEventArgs
} // namespace app::classes::types
