#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GenericTypeParameterBuilder__Class.h>
#include <Modloader/app/structs/GenericTypeParameterBuilder.h>

namespace app::classes::types {
    namespace GenericTypeParameterBuilder {
        namespace {
            inline app::GenericTypeParameterBuilder__Class* type_info_ref = nullptr;
        }
        inline app::GenericTypeParameterBuilder__Class** type_info = &type_info_ref;
        inline app::GenericTypeParameterBuilder__Class* get_class() {
            return il2cpp::get_class<app::GenericTypeParameterBuilder__Class>(type_info, "System.Reflection.Emit", "GenericTypeParameterBuilder");
        }
        inline app::GenericTypeParameterBuilder* create() {
            return il2cpp::create_object<app::GenericTypeParameterBuilder>(get_class());
        }
    } // namespace GenericTypeParameterBuilder
} // namespace app::classes::types
