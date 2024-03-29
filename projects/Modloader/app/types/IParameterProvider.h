#pragma once
#include <Modloader/app/structs/IParameterProvider.h>
#include <Modloader/app/structs/IParameterProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IParameterProvider {
        inline app::IParameterProvider__Class** type_info() {
            static app::IParameterProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IParameterProvider__Class**)(modloader::win::memory::resolve_rva(0x04746ED8));
            }
            return cache;
        }
        inline app::IParameterProvider__Class* get_class() {
            return il2cpp::get_class<app::IParameterProvider__Class>(type_info(), "System.Linq.Expressions", "IParameterProvider");
        }
    } // namespace IParameterProvider
} // namespace app::classes::types
