#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FieldBuilder__Class.h>
#include <Modloader/app/structs/FieldBuilder.h>

namespace app::classes::types {
    namespace FieldBuilder {
        namespace {
            inline app::FieldBuilder__Class* type_info_ref = nullptr;
        }
        inline app::FieldBuilder__Class** type_info = &type_info_ref;
        inline app::FieldBuilder__Class* get_class() {
            return il2cpp::get_class<app::FieldBuilder__Class>(type_info, "System.Reflection.Emit", "FieldBuilder");
        }
        inline app::FieldBuilder* create() {
            return il2cpp::create_object<app::FieldBuilder>(get_class());
        }
    } // namespace FieldBuilder
} // namespace app::classes::types
