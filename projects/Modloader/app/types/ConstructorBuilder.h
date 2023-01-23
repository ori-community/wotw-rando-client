#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConstructorBuilder__Class.h>
#include <Modloader/app/structs/ConstructorBuilder.h>

namespace app::classes::types {
    namespace ConstructorBuilder {
        namespace {
            inline app::ConstructorBuilder__Class* type_info_ref = nullptr;
        }
        inline app::ConstructorBuilder__Class** type_info = &type_info_ref;
        inline app::ConstructorBuilder__Class* get_class() {
            return il2cpp::get_class<app::ConstructorBuilder__Class>(type_info, "System.Reflection.Emit", "ConstructorBuilder");
        }
        inline app::ConstructorBuilder* create() {
            return il2cpp::create_object<app::ConstructorBuilder>(get_class());
        }
    } // namespace ConstructorBuilder
} // namespace app::classes::types
