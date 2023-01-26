#pragma once
#include <Modloader/app/structs/ListParameterProvider.h>
#include <Modloader/app/structs/ListParameterProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ListParameterProvider {
        inline app::ListParameterProvider__Class** type_info() {
            static app::ListParameterProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ListParameterProvider__Class**)(modloader::win::memory::resolve_rva(0x0470D590));
            }
            return cache;
        }
        inline app::ListParameterProvider__Class* get_class() {
            return il2cpp::get_class<app::ListParameterProvider__Class>(type_info(), "System.Dynamic.Utils", "ListParameterProvider");
        }
        inline app::ListParameterProvider* create() {
            return il2cpp::create_object<app::ListParameterProvider>(get_class());
        }
    } // namespace ListParameterProvider
} // namespace app::classes::types
