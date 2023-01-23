#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EntityTargetting__Array__Class.h>
#include <Modloader/app/structs/EntityTargetting__Array.h>

namespace app::classes::types {
    namespace EntityTargetting__Array {
        namespace {
            inline app::EntityTargetting__Array__Class* type_info_ref = nullptr;
        }
        inline app::EntityTargetting__Array__Class** type_info = &type_info_ref;
        inline app::EntityTargetting__Array__Class* get_class() {
            return il2cpp::get_class<app::EntityTargetting__Array__Class>(type_info, "", "EntityTargetting[]");
        }
        inline app::EntityTargetting__Array* create() {
            return il2cpp::create_object<app::EntityTargetting__Array>(get_class());
        }
    } // namespace EntityTargetting__Array
} // namespace app::classes::types
