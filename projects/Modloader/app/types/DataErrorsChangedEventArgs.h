#pragma once
#include <Modloader/app/structs/DataErrorsChangedEventArgs.h>
#include <Modloader/app/structs/DataErrorsChangedEventArgs__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DataErrorsChangedEventArgs {
        inline app::DataErrorsChangedEventArgs__Class** type_info() {
            static app::DataErrorsChangedEventArgs__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DataErrorsChangedEventArgs__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DataErrorsChangedEventArgs__Class* get_class() {
            return il2cpp::get_class<app::DataErrorsChangedEventArgs__Class>(type_info(), "System.ComponentModel", "DataErrorsChangedEventArgs");
        }
        inline app::DataErrorsChangedEventArgs* create() {
            return il2cpp::create_object<app::DataErrorsChangedEventArgs>(get_class());
        }
    } // namespace DataErrorsChangedEventArgs
} // namespace app::classes::types
