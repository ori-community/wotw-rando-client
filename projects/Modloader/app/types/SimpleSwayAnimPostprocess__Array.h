#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess__Array__Class.h>
#include <Modloader/app/structs/SimpleSwayAnimPostprocess__Array.h>

namespace app::classes::types {
    namespace SimpleSwayAnimPostprocess__Array {
        namespace {
            inline app::SimpleSwayAnimPostprocess__Array__Class* type_info_ref = nullptr;
        }
        inline app::SimpleSwayAnimPostprocess__Array__Class** type_info = &type_info_ref;
        inline app::SimpleSwayAnimPostprocess__Array__Class* get_class() {
            return il2cpp::get_class<app::SimpleSwayAnimPostprocess__Array__Class>(type_info, "Moon", "SimpleSwayAnimPostprocess[]");
        }
        inline app::SimpleSwayAnimPostprocess__Array* create() {
            return il2cpp::create_object<app::SimpleSwayAnimPostprocess__Array>(get_class());
        }
    } // namespace SimpleSwayAnimPostprocess__Array
} // namespace app::classes::types
