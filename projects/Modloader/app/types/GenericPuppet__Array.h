#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/GenericPuppet__Array__Class.h>
#include <Modloader/app/structs/GenericPuppet__Array.h>

namespace app::classes::types {
    namespace GenericPuppet__Array {
        namespace {
            inline app::GenericPuppet__Array__Class* type_info_ref = nullptr;
        }
        inline app::GenericPuppet__Array__Class** type_info = &type_info_ref;
        inline app::GenericPuppet__Array__Class* get_class() {
            return il2cpp::get_class<app::GenericPuppet__Array__Class>(type_info, "", "GenericPuppet[]");
        }
        inline app::GenericPuppet__Array* create() {
            return il2cpp::create_object<app::GenericPuppet__Array>(get_class());
        }
    } // namespace GenericPuppet__Array
} // namespace app::classes::types
